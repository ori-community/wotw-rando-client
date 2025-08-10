#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Gradients_Hue.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Gradients_Hue {
    IL2CPP_REGISTER_METHOD(0x0247BB80, app::Material*, get_material, app::CameraFilterPack_Gradients_Hue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0247A170, void, Start, app::CameraFilterPack_Gradients_Hue* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0247BD60,
        void,
        OnRenderImage,
        app::CameraFilterPack_Gradients_Hue* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, app::CameraFilterPack_Gradients_Hue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0247C0C0, void, OnDisable, app::CameraFilterPack_Gradients_Hue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0247C1A0, void, ctor, app::CameraFilterPack_Gradients_Hue* this_ptr)
} // namespace app::classes::CameraFilterPack_Gradients_Hue
