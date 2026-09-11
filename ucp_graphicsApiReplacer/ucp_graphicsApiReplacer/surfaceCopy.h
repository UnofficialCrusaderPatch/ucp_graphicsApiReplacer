#pragma once

#include <cstddef>
#include <cstring>

namespace UCPGraphicsApiReplacer
{
  // Copies a rectangle between distinct surfaces. Callers supply valid bounds,
  // pitches >= rowBytes and non-overlapping storage; padding stays untouched.
  // A complete, tightly packed rectangle needs only one memcpy.
  inline void copySurfaceRows(void* destination, std::size_t destinationPitch,
    const void* source, std::size_t sourcePitch, std::size_t rowBytes, std::size_t rows)
  {
    if (rows == 0 || rowBytes == 0)
      return;

    if (sourcePitch == rowBytes && destinationPitch == rowBytes)
    {
      std::memcpy(destination, source, rowBytes * rows);
      return;
    }

    unsigned char* destinationRow = static_cast<unsigned char*>(destination);
    const unsigned char* sourceRow = static_cast<const unsigned char*>(source);
    for (;;)
    {
      std::memcpy(destinationRow, sourceRow, rowBytes);
      // Do not form an out-of-bounds pointer after the final partial row.
      if (--rows == 0)
        return;
      destinationRow += destinationPitch;
      sourceRow += sourcePitch;
    }
  }
}
