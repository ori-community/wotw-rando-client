#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_Colors_Adjust_ColorRGB {
    IL2CPP_REGISTER_METHOD(0x024DD2A0, app::Material*, get_material, (app::CameraFilterPack_Colors_Adjust_ColorRGB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024DD480, void, Start, (app::CameraFilterPack_Colors_Adjust_ColorRGB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024DD600, void, OnRenderImage, (app::CameraFilterPack_Colors_Adjust_ColorRGB * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024DD9D0, void, OnValidate, (app::CameraFilterPack_Colors_Adjust_ColorRGB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024DDA70, void, Update, (app::CameraFilterPack_Colors_Adjust_ColorRGB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024DDB10, void, OnDisable, (app::CameraFilterPack_Colors_Adjust_ColorRGB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0136E200, void, ctor, (app::CameraFilterPack_Colors_Adjust_ColorRGB * this_ptr))
} // namespace app::classes::CameraFilterPack_Colors_Adjust_ColorRGB
