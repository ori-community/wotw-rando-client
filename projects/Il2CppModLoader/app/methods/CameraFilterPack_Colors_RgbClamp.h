#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_Colors_RgbClamp {
    IL2CPP_REGISTER_METHOD(0x024E2B40, app::Material *, get_material, (app::CameraFilterPack_Colors_RgbClamp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E2D20, void, Start, (app::CameraFilterPack_Colors_RgbClamp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E2E70, void, OnRenderImage, (app::CameraFilterPack_Colors_RgbClamp * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_Colors_RgbClamp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E3330, void, OnDisable, (app::CameraFilterPack_Colors_RgbClamp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E3410, void, ctor, (app::CameraFilterPack_Colors_RgbClamp * this_ptr))
}
