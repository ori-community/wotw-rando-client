#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_TV_WideScreenVertical.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_TV_WideScreenVertical {
    IL2CPP_REGISTER_METHOD(0x020F30A0, app::Material*, get_material, app::CameraFilterPack_TV_WideScreenVertical* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020F3280, void, Start, app::CameraFilterPack_TV_WideScreenVertical* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x020F3400,
        void,
        OnRenderImage,
        app::CameraFilterPack_TV_WideScreenVertical* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x020F37D0, void, OnValidate, app::CameraFilterPack_TV_WideScreenVertical* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020F3870, void, Update, app::CameraFilterPack_TV_WideScreenVertical* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020F3910, void, OnDisable, app::CameraFilterPack_TV_WideScreenVertical* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020F1DD0, void, ctor, app::CameraFilterPack_TV_WideScreenVertical* this_ptr)
} // namespace app::classes::CameraFilterPack_TV_WideScreenVertical
