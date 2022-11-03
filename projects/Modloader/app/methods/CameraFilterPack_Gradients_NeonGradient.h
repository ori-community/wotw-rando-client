#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_Gradients_NeonGradient {
    IL2CPP_REGISTER_METHOD(0x0247C240, app::Material*, get_material, (app::CameraFilterPack_Gradients_NeonGradient * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247A170, void, Start, (app::CameraFilterPack_Gradients_NeonGradient * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247C420, void, OnRenderImage, (app::CameraFilterPack_Gradients_NeonGradient * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_Gradients_NeonGradient * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247C780, void, OnDisable, (app::CameraFilterPack_Gradients_NeonGradient * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247C860, void, ctor, (app::CameraFilterPack_Gradients_NeonGradient * this_ptr))
} // namespace app::classes::CameraFilterPack_Gradients_NeonGradient
