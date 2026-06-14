#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Vision_Warp.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Vision_Warp {
    IL2CPP_REGISTER_METHOD(0x020FA9A0, app::Material*, get_material, app::CameraFilterPack_Vision_Warp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020FAB80, void, Start, app::CameraFilterPack_Vision_Warp* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x020FAD00,
        void,
        OnRenderImage,
        app::CameraFilterPack_Vision_Warp* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x020FB0D0, void, OnValidate, app::CameraFilterPack_Vision_Warp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020FB170, void, Update, app::CameraFilterPack_Vision_Warp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020FB210, void, OnDisable, app::CameraFilterPack_Vision_Warp* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020FB2F0, void, ctor, app::CameraFilterPack_Vision_Warp* this_ptr)
} // namespace app::classes::CameraFilterPack_Vision_Warp
