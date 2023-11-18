#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/P3D_TexturePreview.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::P3D_TexturePreview {
    IL2CPP_REGISTER_METHOD(0x030979A0, void, Show, (app::Mesh * mesh, int32_t submesh_index, app::Transform* transform, float opacity, app::Texture2D* texture, app::Vector2 tiling, app::Vector2 offset))
    IL2CPP_REGISTER_METHOD(0x03097DD0, void, Mark, ())
    IL2CPP_REGISTER_METHOD(0x03097F50, void, Sweep, ())
    IL2CPP_REGISTER_METHOD(0x03098140, void, OnEnable, (app::P3D_TexturePreview * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03098200, void, Update, (app::P3D_TexturePreview * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030982A0, void, OnDisable, (app::P3D_TexturePreview * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03098360, void, OnDestroy, (app::P3D_TexturePreview * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030983E0, void, UpdateShow, (app::P3D_TexturePreview * this_ptr, app::Mesh* mesh, int32_t submesh_index, app::Transform* target, float opacity, app::Texture2D* texture, app::Vector2 tiling, app::Vector2 offset))
    IL2CPP_REGISTER_METHOD(0x03098F20, void, ctor, (app::P3D_TexturePreview * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03098FB0, void, cctor, ())
} // namespace app::classes::P3D_TexturePreview
