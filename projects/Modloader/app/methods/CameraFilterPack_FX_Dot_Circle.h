#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_FX_Dot_Circle {
    IL2CPP_REGISTER_METHOD(0x0246B1C0, app::Material*, get_material, (app::CameraFilterPack_FX_Dot_Circle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246B3A0, void, Start, (app::CameraFilterPack_FX_Dot_Circle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246B510, void, OnRenderImage, (app::CameraFilterPack_FX_Dot_Circle * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x0246B840, void, OnValidate, (app::CameraFilterPack_FX_Dot_Circle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246B8D0, void, Update, (app::CameraFilterPack_FX_Dot_Circle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246B960, void, OnDisable, (app::CameraFilterPack_FX_Dot_Circle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246BA40, void, ctor, (app::CameraFilterPack_FX_Dot_Circle * this_ptr))
} // namespace app::classes::CameraFilterPack_FX_Dot_Circle
