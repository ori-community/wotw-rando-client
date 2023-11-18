#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/LineMesh.h>

namespace app::classes::LineMesh {
    IL2CPP_REGISTER_METHOD(0x00FA50C0, app::Vector3, get_LastPosition, (app::LineMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA5180, int32_t, get_Length, (app::LineMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA5210, float, get_WorldSpaceLength, (app::LineMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA53B0, void, UpdateMesh, (app::LineMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA5430, void, Awake, (app::LineMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA5620, void, Reset, (app::LineMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA5720, void, UpdateTriangles, (app::LineMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA59F0, void, UpdateVertices, (app::LineMesh * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FA6CC0, void, ctor, (app::LineMesh * this_ptr))
} // namespace app::classes::LineMesh
