#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::P3D_BrushPreview {
    IL2CPP_REGISTER_METHOD(0x03090220, void, Show, (app::Mesh * mesh, int32_t submesh_index, app::Transform* transform, float opacity, app::P3D_Matrix paint_matrix, app::Vector2 canvas_resolution, app::Texture2D* shape, app::Vector2 tiling, app::Vector2 offset))
    IL2CPP_REGISTER_METHOD(0x030906E0, void, Mark, ())
    IL2CPP_REGISTER_METHOD(0x03090860, void, Sweep, ())
    IL2CPP_REGISTER_METHOD(0x03090A50, void, OnEnable, (app::P3D_BrushPreview * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03090B10, void, Update, (app::P3D_BrushPreview * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03090BB0, void, OnDisable, (app::P3D_BrushPreview * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03090C70, void, OnDestroy, (app::P3D_BrushPreview * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03090CF0, void, UpdateShow, (app::P3D_BrushPreview * this_ptr, app::Mesh* mesh, int32_t submesh_index, app::Transform* target, float opacity, app::P3D_Matrix paint_matrix, app::Vector2 canvas_resolution, app::Texture2D* shape, app::Vector2 tiling, app::Vector2 offset))
    IL2CPP_REGISTER_METHOD(0x030918D0, void, ctor, (app::P3D_BrushPreview * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03091960, void, cctor, ())
} // namespace app::classes::P3D_BrushPreview
