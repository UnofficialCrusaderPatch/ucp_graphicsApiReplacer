# Surface copy checks

These tests build without DirectX or UCP dependencies:

```
cmake -S tests -B build/surface-copy
cmake --build build/surface-copy --config Release
ctest --test-dir build/surface-copy -C Release --output-on-failure
```

The 270 cases cover tightly packed frames, independently padded source and
destination rows, partial rectangles, unaligned origins, zero dimensions,
single rows and 2560 x 1440 16-bit frames. Byte-by-byte expected output also
checks that padding, surrounding guards and the source remain unchanged.
Empty copies additionally accept null pointers without accessing them.

Callers must provide valid, non-overlapping rectangles. FakeBackbuffer copies
from the independently allocated offMain/offMap surfaces. The DirectX upload
copies into the mapped texture, using the driver's RowPitch. Pixel conversion,
transparency, clipping decisions and synchronization remain with their existing
owners. See Microsoft's [mapped-resource layout contract](https://learn.microsoft.com/en-us/windows/win32/api/d3d11/ns-d3d11-d3d11_mapped_subresource).

These are copy correctness checks, not a full graphics module build or a
performance benchmark. Full module compilation and in-game validation of menu,
map, video, cursor, resize and both graphics backends remain required. Any
speed claim needs frame-copy and whole-game measurements on the actual driver.
