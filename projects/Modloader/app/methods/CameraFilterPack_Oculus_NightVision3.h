#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_Oculus_NightVision3 {
    IL2CPP_REGISTER_METHOD(0x02485740, app::Material*, get_material, (app::CameraFilterPack_Oculus_NightVision3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02485920, void, Start, (app::CameraFilterPack_Oculus_NightVision3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02485A90, void, OnRenderImage, (app::CameraFilterPack_Oculus_NightVision3 * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x02485E30, void, OnValidate, (app::CameraFilterPack_Oculus_NightVision3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02485EC0, void, Update, (app::CameraFilterPack_Oculus_NightVision3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02485F50, void, OnDisable, (app::CameraFilterPack_Oculus_NightVision3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E70F0, void, ctor, (app::CameraFilterPack_Oculus_NightVision3 * this_ptr))
} // namespace app::classes::CameraFilterPack_Oculus_NightVision3
