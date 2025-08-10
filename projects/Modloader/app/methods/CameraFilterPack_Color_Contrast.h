#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Color_Contrast.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Color_Contrast {
    IL2CPP_REGISTER_METHOD(0x024D91F0, app::Material*, get_material, app::CameraFilterPack_Color_Contrast* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024D93D0, void, Start, app::CameraFilterPack_Color_Contrast* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x024D9540,
        void,
        OnRenderImage,
        app::CameraFilterPack_Color_Contrast* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x024D9860, void, OnValidate, app::CameraFilterPack_Color_Contrast* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024D98F0, void, Update, app::CameraFilterPack_Color_Contrast* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024D9980, void, OnDisable, app::CameraFilterPack_Color_Contrast* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024D9A60, void, ctor, app::CameraFilterPack_Color_Contrast* this_ptr)
} // namespace app::classes::CameraFilterPack_Color_Contrast
