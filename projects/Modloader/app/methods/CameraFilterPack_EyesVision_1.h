#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_EyesVision_1 {
    IL2CPP_REGISTER_METHOD(0x02466DE0, app::Material*, get_material, (app::CameraFilterPack_EyesVision_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02466FC0, void, Start, (app::CameraFilterPack_EyesVision_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02467140, void, OnRenderImage, (app::CameraFilterPack_EyesVision_1 * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_EyesVision_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02467470, void, OnDisable, (app::CameraFilterPack_EyesVision_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02467550, void, ctor, (app::CameraFilterPack_EyesVision_1 * this_ptr))
} // namespace app::classes::CameraFilterPack_EyesVision_1
