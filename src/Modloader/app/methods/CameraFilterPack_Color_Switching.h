#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Color_Switching.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Color_Switching {
    IL2CPP_REGISTER_METHOD(0x024DC0F0, app::Material*, get_material, app::CameraFilterPack_Color_Switching* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024DC2D0, void, Start, app::CameraFilterPack_Color_Switching* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x024DC440,
        void,
        OnRenderImage,
        app::CameraFilterPack_Color_Switching* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x024DC770, void, OnValidate, app::CameraFilterPack_Color_Switching* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024DC800, void, Update, app::CameraFilterPack_Color_Switching* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024DC890, void, OnDisable, app::CameraFilterPack_Color_Switching* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024DC970, void, ctor, app::CameraFilterPack_Color_Switching* this_ptr)
} // namespace app::classes::CameraFilterPack_Color_Switching
