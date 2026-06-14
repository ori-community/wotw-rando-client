#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Colors_Brightness.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Colors_Brightness {
    IL2CPP_REGISTER_METHOD(0x024E0100, app::Material*, get_material, app::CameraFilterPack_Colors_Brightness* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024E02E0, void, Start, app::CameraFilterPack_Colors_Brightness* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x024E0450,
        void,
        OnRenderImage,
        app::CameraFilterPack_Colors_Brightness* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x024E05E0, void, OnValidate, app::CameraFilterPack_Colors_Brightness* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024E0670, void, Update, app::CameraFilterPack_Colors_Brightness* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024E0700, void, OnDisable, app::CameraFilterPack_Colors_Brightness* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024E07E0, void, ctor, app::CameraFilterPack_Colors_Brightness* this_ptr)
} // namespace app::classes::CameraFilterPack_Colors_Brightness
