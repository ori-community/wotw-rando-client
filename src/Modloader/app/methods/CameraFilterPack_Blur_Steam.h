#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Blur_Steam.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Blur_Steam {
    IL2CPP_REGISTER_METHOD(0x024D5290, app::Material*, get_material, app::CameraFilterPack_Blur_Steam* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024D5470, void, Start, app::CameraFilterPack_Blur_Steam* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x024D55E0,
        void,
        OnRenderImage,
        app::CameraFilterPack_Blur_Steam* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x024D59B0, void, OnValidate, app::CameraFilterPack_Blur_Steam* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024D5A40, void, Update, app::CameraFilterPack_Blur_Steam* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024D5AD0, void, OnDisable, app::CameraFilterPack_Blur_Steam* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024D5BB0, void, ctor, app::CameraFilterPack_Blur_Steam* this_ptr)
} // namespace app::classes::CameraFilterPack_Blur_Steam
