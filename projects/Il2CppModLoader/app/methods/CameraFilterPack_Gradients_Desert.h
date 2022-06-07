#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_Gradients_Desert {
    IL2CPP_REGISTER_METHOD(0x0247A740, app::Material *, get_material, (app::CameraFilterPack_Gradients_Desert * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247A170, void, Start, (app::CameraFilterPack_Gradients_Desert * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247A920, void, OnRenderImage, (app::CameraFilterPack_Gradients_Desert * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_Gradients_Desert * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247AC80, void, OnDisable, (app::CameraFilterPack_Gradients_Desert * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247AD60, void, ctor, (app::CameraFilterPack_Gradients_Desert * this_ptr))
}
