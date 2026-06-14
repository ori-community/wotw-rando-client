#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Edge_Golden.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Edge_Golden {
    IL2CPP_REGISTER_METHOD(0x02464D70, app::Material*, get_material, app::CameraFilterPack_Edge_Golden* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02464F50, void, Start, app::CameraFilterPack_Edge_Golden* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x024650A0,
        void,
        OnRenderImage,
        app::CameraFilterPack_Edge_Golden* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, app::CameraFilterPack_Edge_Golden* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02465400, void, OnDisable, app::CameraFilterPack_Edge_Golden* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0136E200, void, ctor, app::CameraFilterPack_Edge_Golden* this_ptr)
} // namespace app::classes::CameraFilterPack_Edge_Golden
