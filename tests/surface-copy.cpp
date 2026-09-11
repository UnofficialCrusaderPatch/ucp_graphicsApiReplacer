#include "../ucp_graphicsApiReplacer/ucp_graphicsApiReplacer/surfaceCopy.h"
#include <iostream>
#include <stdexcept>
#include <vector>

static void check(std::size_t width, std::size_t height,
  std::size_t sourcePadding, std::size_t destinationPadding)
{
  const std::size_t sourcePitch = width + sourcePadding;
  const std::size_t destinationPitch = width + destinationPadding;
  // Unequal origins exercise subrectangles and unaligned copy addresses.
  const std::size_t sourceOrigin = 67, destinationOrigin = 69;
  std::vector<unsigned char> source(sourceOrigin + sourcePitch * height + 64);
  unsigned int random = 731;
  for (std::size_t i = 0; i < source.size(); ++i)
  {
    random = random * 1664525u + 1013904223u;
    source[i] = static_cast<unsigned char>(random >> 24);
  }
  const std::vector<unsigned char> originalSource = source;
  std::vector<unsigned char> actual(destinationOrigin + destinationPitch * height + 64, 0xa5);
  std::vector<unsigned char> expected = actual;
  for (std::size_t y = 0; y < height; ++y)
    for (std::size_t x = 0; x < width; ++x)
      expected[destinationOrigin + y * destinationPitch + x] = source[sourceOrigin + y * sourcePitch + x];

  UCPGraphicsApiReplacer::copySurfaceRows(&actual[destinationOrigin], destinationPitch,
    &source[sourceOrigin], sourcePitch, width, height);
  if (actual != expected || source != originalSource)
    throw std::runtime_error("Rectangle bytes, padding, guards or source changed unexpectedly");
}

int main()
{
  // Empty rectangles must not access either pointer.
  UCPGraphicsApiReplacer::copySurfaceRows(0, 0, 0, 0, 0, 10);
  UCPGraphicsApiReplacer::copySurfaceRows(0, 0, 0, 0, 10, 0);
  const std::size_t widths[] = {0, 1, 7, 1600, 2560, 5120};
  const std::size_t heights[] = {0, 1, 7, 600, 1440};
  const std::size_t padding[] = {0, 1, 64};
  unsigned int cases = 0;
  for (std::size_t w = 0; w < sizeof(widths)/sizeof(*widths); ++w)
    for (std::size_t h = 0; h < sizeof(heights)/sizeof(*heights); ++h)
      for (std::size_t s = 0; s < sizeof(padding)/sizeof(*padding); ++s)
        for (std::size_t d = 0; d < sizeof(padding)/sizeof(*padding); ++d)
        {
          check(widths[w], heights[h], padding[s], padding[d]);
          ++cases;
        }
  std::cout << cases << " rectangle cases passed\n";
}
