#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_FX_ZebraColor {
    IL2CPP_REGISTER_METHOD(0x02475120, app::Material*, get_material, (app::CameraFilterPack_FX_ZebraColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02475300, void, Start, (app::CameraFilterPack_FX_ZebraColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02475470, void, OnRenderImage, (app::CameraFilterPack_FX_ZebraColor * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x02475790, void, OnValidate, (app::CameraFilterPack_FX_ZebraColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02475820, void, Update, (app::CameraFilterPack_FX_ZebraColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024758B0, void, OnDisable, (app::CameraFilterPack_FX_ZebraColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024666C0, void, ctor, (app::CameraFilterPack_FX_ZebraColor * this_ptr))
} // namespace app::classes::CameraFilterPack_FX_ZebraColor
