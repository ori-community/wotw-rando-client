#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_Oculus_NightVision1 {
    IL2CPP_REGISTER_METHOD(0x024841F0, app::Material*, get_material, (app::CameraFilterPack_Oculus_NightVision1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024843D0, void, Start, (app::CameraFilterPack_Oculus_NightVision1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02484540, void, OnRenderImage, (app::CameraFilterPack_Oculus_NightVision1 * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x003F8E90, void, Update, (app::CameraFilterPack_Oculus_NightVision1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024848E0, void, OnDisable, (app::CameraFilterPack_Oculus_NightVision1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024849C0, void, ctor, (app::CameraFilterPack_Oculus_NightVision1 * this_ptr))
} // namespace app::classes::CameraFilterPack_Oculus_NightVision1
