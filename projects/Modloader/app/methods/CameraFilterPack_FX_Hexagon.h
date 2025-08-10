#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_FX_Hexagon.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_FX_Hexagon {
    IL2CPP_REGISTER_METHOD(0x0246FDA0, app::Material*, get_material, app::CameraFilterPack_FX_Hexagon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0246FF80, void, Start, app::CameraFilterPack_FX_Hexagon* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x024700D0,
        void,
        OnRenderImage,
        app::CameraFilterPack_FX_Hexagon* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, app::CameraFilterPack_FX_Hexagon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024703C0, void, OnDisable, app::CameraFilterPack_FX_Hexagon* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0136E200, void, ctor, app::CameraFilterPack_FX_Hexagon* this_ptr)
} // namespace app::classes::CameraFilterPack_FX_Hexagon
