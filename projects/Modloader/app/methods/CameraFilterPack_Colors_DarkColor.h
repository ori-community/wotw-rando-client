#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_Colors_DarkColor.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Colors_DarkColor {
    IL2CPP_REGISTER_METHOD(0x024E07F0, app::Material*, get_material, (app::CameraFilterPack_Colors_DarkColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E09D0, void, Start, (app::CameraFilterPack_Colors_DarkColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E0B50, void, OnRenderImage, (app::CameraFilterPack_Colors_DarkColor * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024E0F20, void, OnValidate, (app::CameraFilterPack_Colors_DarkColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E0FC0, void, Update, (app::CameraFilterPack_Colors_DarkColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E1060, void, OnDisable, (app::CameraFilterPack_Colors_DarkColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E1140, void, ctor, (app::CameraFilterPack_Colors_DarkColor * this_ptr))
} // namespace app::classes::CameraFilterPack_Colors_DarkColor
