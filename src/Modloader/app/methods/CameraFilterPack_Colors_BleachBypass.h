#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Colors_BleachBypass.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Colors_BleachBypass {
    IL2CPP_REGISTER_METHOD(0x024DF920, app::Material*, get_material, app::CameraFilterPack_Colors_BleachBypass* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024DFB00, void, Start, app::CameraFilterPack_Colors_BleachBypass* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x024DFC70,
        void,
        OnRenderImage,
        app::CameraFilterPack_Colors_BleachBypass* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x024DFF90, void, Update, app::CameraFilterPack_Colors_BleachBypass* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024E0020, void, OnDisable, app::CameraFilterPack_Colors_BleachBypass* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020E70F0, void, ctor, app::CameraFilterPack_Colors_BleachBypass* this_ptr)
} // namespace app::classes::CameraFilterPack_Colors_BleachBypass
