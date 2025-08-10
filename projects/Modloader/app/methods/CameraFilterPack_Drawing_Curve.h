#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Drawing_Curve.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Drawing_Curve {
    IL2CPP_REGISTER_METHOD(0x024F0C60, app::Material*, get_material, app::CameraFilterPack_Drawing_Curve* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024F0E40, void, Start, app::CameraFilterPack_Drawing_Curve* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x024F0FB0,
        void,
        OnRenderImage,
        app::CameraFilterPack_Drawing_Curve* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x024F12D0, void, OnValidate, app::CameraFilterPack_Drawing_Curve* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024F1360, void, Update, app::CameraFilterPack_Drawing_Curve* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024F13F0, void, OnDisable, app::CameraFilterPack_Drawing_Curve* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020E70F0, void, ctor, app::CameraFilterPack_Drawing_Curve* this_ptr)
} // namespace app::classes::CameraFilterPack_Drawing_Curve
