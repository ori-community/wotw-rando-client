#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_Color_Chromatic_Aberration {
    IL2CPP_REGISTER_METHOD(0x024D8960, app::Material*, get_material, (app::CameraFilterPack_Color_Chromatic_Aberration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D8B40, void, Start, (app::CameraFilterPack_Color_Chromatic_Aberration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D8CB0, void, OnRenderImage, (app::CameraFilterPack_Color_Chromatic_Aberration * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024D8FD0, void, OnValidate, (app::CameraFilterPack_Color_Chromatic_Aberration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D9060, void, Update, (app::CameraFilterPack_Color_Chromatic_Aberration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D90F0, void, OnDisable, (app::CameraFilterPack_Color_Chromatic_Aberration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D91D0, void, ctor, (app::CameraFilterPack_Color_Chromatic_Aberration * this_ptr))
} // namespace app::classes::CameraFilterPack_Color_Chromatic_Aberration
