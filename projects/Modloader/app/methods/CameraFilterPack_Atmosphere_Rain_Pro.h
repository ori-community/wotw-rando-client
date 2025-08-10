#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Atmosphere_Rain_Pro.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Atmosphere_Rain_Pro {
    IL2CPP_REGISTER_METHOD(0x02740410, app::Material*, get_material, app::CameraFilterPack_Atmosphere_Rain_Pro* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027405F0, void, Start, app::CameraFilterPack_Atmosphere_Rain_Pro* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02740770,
        void,
        OnRenderImage,
        app::CameraFilterPack_Atmosphere_Rain_Pro* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, app::CameraFilterPack_Atmosphere_Rain_Pro* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02740C60, void, OnDisable, app::CameraFilterPack_Atmosphere_Rain_Pro* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02740D40, void, ctor, app::CameraFilterPack_Atmosphere_Rain_Pro* this_ptr)
} // namespace app::classes::CameraFilterPack_Atmosphere_Rain_Pro
