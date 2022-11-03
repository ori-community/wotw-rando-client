#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_Gradients_Rainbow {
    IL2CPP_REGISTER_METHOD(0x0247C900, app::Material*, get_material, (app::CameraFilterPack_Gradients_Rainbow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247A170, void, Start, (app::CameraFilterPack_Gradients_Rainbow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247CAE0, void, OnRenderImage, (app::CameraFilterPack_Gradients_Rainbow * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_Gradients_Rainbow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247CE40, void, OnDisable, (app::CameraFilterPack_Gradients_Rainbow * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247CF20, void, ctor, (app::CameraFilterPack_Gradients_Rainbow * this_ptr))
} // namespace app::classes::CameraFilterPack_Gradients_Rainbow
