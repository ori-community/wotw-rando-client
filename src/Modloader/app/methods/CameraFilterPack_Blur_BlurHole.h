#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Blur_BlurHole.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Blur_BlurHole {
    IL2CPP_REGISTER_METHOD(0x027644B0, app::Material*, get_material, app::CameraFilterPack_Blur_BlurHole* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02764690, void, Start, app::CameraFilterPack_Blur_BlurHole* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02764800,
        void,
        OnRenderImage,
        app::CameraFilterPack_Blur_BlurHole* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x02764D00, void, OnValidate, app::CameraFilterPack_Blur_BlurHole* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02764D90, void, Update, app::CameraFilterPack_Blur_BlurHole* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02764E20, void, OnDisable, app::CameraFilterPack_Blur_BlurHole* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02764F00, void, ctor, app::CameraFilterPack_Blur_BlurHole* this_ptr)
} // namespace app::classes::CameraFilterPack_Blur_BlurHole
