#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Color_Sepia.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Color_Sepia {
    IL2CPP_REGISTER_METHOD(0x024DB9F0, app::Material*, get_material, app::CameraFilterPack_Color_Sepia* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024DBBD0, void, Start, app::CameraFilterPack_Color_Sepia* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x024DBD20,
        void,
        OnRenderImage,
        app::CameraFilterPack_Color_Sepia* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, app::CameraFilterPack_Color_Sepia* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024DC010, void, OnDisable, app::CameraFilterPack_Color_Sepia* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0136E200, void, ctor, app::CameraFilterPack_Color_Sepia* this_ptr)
} // namespace app::classes::CameraFilterPack_Color_Sepia
