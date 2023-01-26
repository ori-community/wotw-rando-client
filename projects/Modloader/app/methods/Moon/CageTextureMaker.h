#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/CageTextureMaker.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::Moon::CageTextureMaker {
    IL2CPP_REGISTER_METHOD(0x00CC0780, app::Material*, get_baseMaterial, ())
    IL2CPP_REGISTER_METHOD(0x00CC0980, app::Material*, get_strokeMaterial, ())
    IL2CPP_REGISTER_METHOD(0x00CC0B80, app::Mesh*, get_QuadMesh, ())
    IL2CPP_REGISTER_METHOD(0x00CC1150, app::Texture2D*, CreateTexture, (app::Bounds bounds, app::Mesh* mesh, app::Transform* cage_structure_transform))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CageTextureMaker * this_ptr))
} // namespace app::classes::Moon::CageTextureMaker
