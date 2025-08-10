#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Vision_Crystal.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Vision_Crystal {
    IL2CPP_REGISTER_METHOD(0x020F66F0, app::Material*, get_material, app::CameraFilterPack_Vision_Crystal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020F68D0, void, Start, app::CameraFilterPack_Vision_Crystal* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x020F6A50,
        void,
        OnRenderImage,
        app::CameraFilterPack_Vision_Crystal* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x020F6E20, void, OnValidate, app::CameraFilterPack_Vision_Crystal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020F6EC0, void, Update, app::CameraFilterPack_Vision_Crystal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020F6F60, void, OnDisable, app::CameraFilterPack_Vision_Crystal* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020F7040, void, ctor, app::CameraFilterPack_Vision_Crystal* this_ptr)
} // namespace app::classes::CameraFilterPack_Vision_Crystal
