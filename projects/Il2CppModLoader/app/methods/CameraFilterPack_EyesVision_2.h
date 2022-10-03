#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_EyesVision_2 {
    IL2CPP_REGISTER_METHOD(0x02467580, app::Material*, get_material, (app::CameraFilterPack_EyesVision_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02467760, void, Start, (app::CameraFilterPack_EyesVision_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024678E0, void, OnRenderImage, (app::CameraFilterPack_EyesVision_2 * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_EyesVision_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02467C10, void, OnDisable, (app::CameraFilterPack_EyesVision_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02467550, void, ctor, (app::CameraFilterPack_EyesVision_2 * this_ptr))
} // namespace app::classes::CameraFilterPack_EyesVision_2
