#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_FX_Plasma.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_FX_Plasma {
    IL2CPP_REGISTER_METHOD(0x02472490, app::Material*, get_material, app::CameraFilterPack_FX_Plasma* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02472670, void, Start, app::CameraFilterPack_FX_Plasma* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x024727E0,
        void,
        OnRenderImage,
        app::CameraFilterPack_FX_Plasma* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x02472B00, void, OnValidate, app::CameraFilterPack_FX_Plasma* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02472B90, void, Update, app::CameraFilterPack_FX_Plasma* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02472C20, void, OnDisable, app::CameraFilterPack_FX_Plasma* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0246C2D0, void, ctor, app::CameraFilterPack_FX_Plasma* this_ptr)
} // namespace app::classes::CameraFilterPack_FX_Plasma
