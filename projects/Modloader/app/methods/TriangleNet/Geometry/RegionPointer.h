#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RegionPointer.h>

namespace app::classes::TriangleNet::Geometry::RegionPointer {
    IL2CPP_REGISTER_METHOD(0x0261CB50, double, get_Area, app::RegionPointer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0261E350, void, set_Area, app::RegionPointer* this_ptr, double value)
    IL2CPP_REGISTER_METHOD(0x0261E410, void, ctor_1, app::RegionPointer* this_ptr, double x, double y, int32_t id)
    IL2CPP_REGISTER_METHOD(0x0261E430, void, ctor_2, app::RegionPointer* this_ptr, double x, double y, int32_t id, double area)
} // namespace app::classes::TriangleNet::Geometry::RegionPointer
