#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Mesh_1.h>

namespace app::classes::TriangleNet::MeshValidator {
    IL2CPP_REGISTER_METHOD(0x02630FB0, bool, IsConsistent, (app::Mesh_1 * mesh))
    IL2CPP_REGISTER_METHOD(0x02631770, bool, IsDelaunay_1, (app::Mesh_1 * mesh))
    IL2CPP_REGISTER_METHOD(0x02631810, bool, IsConstrainedDelaunay, (app::Mesh_1 * mesh))
    IL2CPP_REGISTER_METHOD(0x026318B0, bool, IsDelaunay_2, (app::Mesh_1 * mesh, bool constrained))
    IL2CPP_REGISTER_METHOD(0x02632100, void, cctor, ())
} // namespace app::classes::TriangleNet::MeshValidator
