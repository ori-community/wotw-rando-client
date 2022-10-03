#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_Noise_TV_3 {
    IL2CPP_REGISTER_METHOD(0x02483840, app::Material*, get_material, (app::CameraFilterPack_Noise_TV_3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02483A20, void, Start, (app::CameraFilterPack_Noise_TV_3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02483BC0, void, OnRenderImage, (app::CameraFilterPack_Noise_TV_3 * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x02483FD0, void, OnValidate, (app::CameraFilterPack_Noise_TV_3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02484070, void, Update, (app::CameraFilterPack_Noise_TV_3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02484110, void, OnDisable, (app::CameraFilterPack_Noise_TV_3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E9B00, void, ctor, (app::CameraFilterPack_Noise_TV_3 * this_ptr))
} // namespace app::classes::CameraFilterPack_Noise_TV_3
