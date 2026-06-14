#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Color_YUV.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Color_YUV {
    IL2CPP_REGISTER_METHOD(0x024DC990, app::Material*, get_material, app::CameraFilterPack_Color_YUV* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024DCB70, void, Start, app::CameraFilterPack_Color_YUV* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x024DCD00,
        void,
        OnRenderImage,
        app::CameraFilterPack_Color_YUV* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x024DD0A0, void, OnValidate, app::CameraFilterPack_Color_YUV* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024DD130, void, Update, app::CameraFilterPack_Color_YUV* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024DD1C0, void, OnDisable, app::CameraFilterPack_Color_YUV* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0136E200, void, ctor, app::CameraFilterPack_Color_YUV* this_ptr)
} // namespace app::classes::CameraFilterPack_Color_YUV
