#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_Gradients_Ansi {
    IL2CPP_REGISTER_METHOD(0x02479F90, app::Material*, get_material, (app::CameraFilterPack_Gradients_Ansi * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247A170, void, Start, (app::CameraFilterPack_Gradients_Ansi * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247A260, void, OnRenderImage, (app::CameraFilterPack_Gradients_Ansi * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_Gradients_Ansi * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247A5C0, void, OnDisable, (app::CameraFilterPack_Gradients_Ansi * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0247A6A0, void, ctor, (app::CameraFilterPack_Gradients_Ansi * this_ptr))
} // namespace app::classes::CameraFilterPack_Gradients_Ansi
