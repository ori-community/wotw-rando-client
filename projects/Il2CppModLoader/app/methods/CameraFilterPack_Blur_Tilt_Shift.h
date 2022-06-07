#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_Blur_Tilt_Shift {
    IL2CPP_REGISTER_METHOD(0x024D5BD0, app::Material *, get_material, (app::CameraFilterPack_Blur_Tilt_Shift * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D5DB0, void, Start, (app::CameraFilterPack_Blur_Tilt_Shift * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D5F20, void, OnRenderImage, (app::CameraFilterPack_Blur_Tilt_Shift * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x024D66A0, void, OnValidate, (app::CameraFilterPack_Blur_Tilt_Shift * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D6730, void, Update, (app::CameraFilterPack_Blur_Tilt_Shift * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D67D0, void, OnDisable, (app::CameraFilterPack_Blur_Tilt_Shift * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024D68B0, void, ctor, (app::CameraFilterPack_Blur_Tilt_Shift * this_ptr))
}
