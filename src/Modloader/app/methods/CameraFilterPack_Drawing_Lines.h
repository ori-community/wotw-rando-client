#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Drawing_Lines.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Drawing_Lines {
    IL2CPP_REGISTER_METHOD(0x024F2D80, app::Material*, get_material, app::CameraFilterPack_Drawing_Lines* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024F2F60, void, Start, app::CameraFilterPack_Drawing_Lines* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x024F30E0,
        void,
        OnRenderImage,
        app::CameraFilterPack_Drawing_Lines* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x024F34B0, void, OnValidate, app::CameraFilterPack_Drawing_Lines* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024F3550, void, Update, app::CameraFilterPack_Drawing_Lines* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024F35F0, void, OnDisable, app::CameraFilterPack_Drawing_Lines* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020E4C90, void, ctor, app::CameraFilterPack_Drawing_Lines* this_ptr)
} // namespace app::classes::CameraFilterPack_Drawing_Lines
