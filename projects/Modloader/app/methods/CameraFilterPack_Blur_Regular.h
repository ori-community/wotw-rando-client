#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Blur_Regular.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Blur_Regular {
    IL2CPP_REGISTER_METHOD(0x024D48D0, app::Material*, get_material, app::CameraFilterPack_Blur_Regular* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024D4AB0, void, Start, app::CameraFilterPack_Blur_Regular* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x024D4C40,
        void,
        OnRenderImage,
        app::CameraFilterPack_Blur_Regular* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x024D5050, void, OnValidate, app::CameraFilterPack_Blur_Regular* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024D5100, void, Update, app::CameraFilterPack_Blur_Regular* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024D51B0, void, OnDisable, app::CameraFilterPack_Blur_Regular* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024D35E0, void, ctor, app::CameraFilterPack_Blur_Regular* this_ptr)
} // namespace app::classes::CameraFilterPack_Blur_Regular
