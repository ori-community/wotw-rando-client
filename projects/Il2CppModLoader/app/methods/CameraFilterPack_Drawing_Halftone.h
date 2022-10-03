#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_Drawing_Halftone {
    IL2CPP_REGISTER_METHOD(0x024F1E90, app::Material*, get_material, (app::CameraFilterPack_Drawing_Halftone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F2070, void, Start, (app::CameraFilterPack_Drawing_Halftone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F21E0, void, OnRenderImage, (app::CameraFilterPack_Drawing_Halftone * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024F2460, void, OnValidate, (app::CameraFilterPack_Drawing_Halftone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F24F0, void, Update, (app::CameraFilterPack_Drawing_Halftone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F2580, void, OnDisable, (app::CameraFilterPack_Drawing_Halftone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F2660, void, ctor, (app::CameraFilterPack_Drawing_Halftone * this_ptr))
} // namespace app::classes::CameraFilterPack_Drawing_Halftone
