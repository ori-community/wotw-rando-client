#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_Oculus_NightVision5 {
    IL2CPP_REGISTER_METHOD(0x02486030, app::Material*, get_material, (app::CameraFilterPack_Oculus_NightVision5 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02486210, void, ChangeFilters, (app::CameraFilterPack_Oculus_NightVision5 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024862C0, void, Start, (app::CameraFilterPack_Oculus_NightVision5 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024863B0, void, OnRenderImage, (app::CameraFilterPack_Oculus_NightVision5 * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x02486CA0, void, OnValidate, (app::CameraFilterPack_Oculus_NightVision5 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_Oculus_NightVision5 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02486CB0, void, OnDisable, (app::CameraFilterPack_Oculus_NightVision5 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02486D90, void, ctor, (app::CameraFilterPack_Oculus_NightVision5 * this_ptr))
} // namespace app::classes::CameraFilterPack_Oculus_NightVision5
