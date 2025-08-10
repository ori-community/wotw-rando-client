#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Blur_Blurry.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Blur_Blurry {
    IL2CPP_REGISTER_METHOD(0x02764F40, app::Material*, get_material, app::CameraFilterPack_Blur_Blurry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02765120, void, Start, app::CameraFilterPack_Blur_Blurry* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02765290,
        void,
        OnRenderImage,
        app::CameraFilterPack_Blur_Blurry* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x027657A0, void, OnValidate, app::CameraFilterPack_Blur_Blurry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02765830, void, Update, app::CameraFilterPack_Blur_Blurry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027658D0, void, OnDisable, app::CameraFilterPack_Blur_Blurry* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027659B0, void, ctor, app::CameraFilterPack_Blur_Blurry* this_ptr)
} // namespace app::classes::CameraFilterPack_Blur_Blurry
