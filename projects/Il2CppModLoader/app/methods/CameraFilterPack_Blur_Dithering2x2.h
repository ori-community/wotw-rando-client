#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_Blur_Dithering2x2 {
    IL2CPP_REGISTER_METHOD(0x02766390, app::Material*, get_material, (app::CameraFilterPack_Blur_Dithering2x2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02766570, void, Start, (app::CameraFilterPack_Blur_Dithering2x2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02766700, void, OnRenderImage, (app::CameraFilterPack_Blur_Dithering2x2 * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x02766B10, void, OnValidate, (app::CameraFilterPack_Blur_Dithering2x2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02766BC0, void, Update, (app::CameraFilterPack_Blur_Dithering2x2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02766C70, void, OnDisable, (app::CameraFilterPack_Blur_Dithering2x2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D35E0, void, ctor, (app::CameraFilterPack_Blur_Dithering2x2 * this_ptr))
} // namespace app::classes::CameraFilterPack_Blur_Dithering2x2
