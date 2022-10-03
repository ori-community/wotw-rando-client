#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_Gradients_Stripe {
    IL2CPP_REGISTER_METHOD(0x0247CFC0, app::Material*, get_material, (app::CameraFilterPack_Gradients_Stripe * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247A170, void, Start, (app::CameraFilterPack_Gradients_Stripe * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247D1A0, void, OnRenderImage, (app::CameraFilterPack_Gradients_Stripe * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_Gradients_Stripe * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247D500, void, OnDisable, (app::CameraFilterPack_Gradients_Stripe * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247D5E0, void, ctor, (app::CameraFilterPack_Gradients_Stripe * this_ptr))
} // namespace app::classes::CameraFilterPack_Gradients_Stripe
