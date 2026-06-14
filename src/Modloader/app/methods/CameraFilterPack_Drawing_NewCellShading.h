#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Drawing_NewCellShading.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Drawing_NewCellShading {
    IL2CPP_REGISTER_METHOD(0x024F8220, app::Material*, get_material, app::CameraFilterPack_Drawing_NewCellShading* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024F8400, void, Start, app::CameraFilterPack_Drawing_NewCellShading* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x024F8550,
        void,
        OnRenderImage,
        app::CameraFilterPack_Drawing_NewCellShading* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, app::CameraFilterPack_Drawing_NewCellShading* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024F88F0, void, OnDisable, app::CameraFilterPack_Drawing_NewCellShading* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024F89D0, void, ctor, app::CameraFilterPack_Drawing_NewCellShading* this_ptr)
} // namespace app::classes::CameraFilterPack_Drawing_NewCellShading
