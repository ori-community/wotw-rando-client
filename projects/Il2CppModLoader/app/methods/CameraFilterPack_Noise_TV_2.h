#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_Noise_TV_2 {
    IL2CPP_REGISTER_METHOD(0x02482E90, app::Material*, get_material, (app::CameraFilterPack_Noise_TV_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02483070, void, Start, (app::CameraFilterPack_Noise_TV_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02483210, void, OnRenderImage, (app::CameraFilterPack_Noise_TV_2 * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x02483620, void, OnValidate, (app::CameraFilterPack_Noise_TV_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024836C0, void, Update, (app::CameraFilterPack_Noise_TV_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02483760, void, OnDisable, (app::CameraFilterPack_Noise_TV_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E9B00, void, ctor, (app::CameraFilterPack_Noise_TV_2 * this_ptr))
} // namespace app::classes::CameraFilterPack_Noise_TV_2
