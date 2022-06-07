#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_Colors_HSV {
    IL2CPP_REGISTER_METHOD(0x024E1170, app::Material *, get_material, (app::CameraFilterPack_Colors_HSV * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E1350, void, Start, (app::CameraFilterPack_Colors_HSV * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E14C0, void, OnRenderImage, (app::CameraFilterPack_Colors_HSV * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x024E16C0, void, OnValidate, (app::CameraFilterPack_Colors_HSV * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E1750, void, Update, (app::CameraFilterPack_Colors_HSV * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E17E0, void, OnDisable, (app::CameraFilterPack_Colors_HSV * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E18C0, void, ctor, (app::CameraFilterPack_Colors_HSV * this_ptr))
}
