#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_TV_Videoflip.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_TV_Videoflip {
    IL2CPP_REGISTER_METHOD(0x020F05F0, app::Material*, get_material, app::CameraFilterPack_TV_Videoflip* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020F07D0, void, Start, app::CameraFilterPack_TV_Videoflip* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x020F0920,
        void,
        OnRenderImage,
        app::CameraFilterPack_TV_Videoflip* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, app::CameraFilterPack_TV_Videoflip* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020F0C10, void, OnDisable, app::CameraFilterPack_TV_Videoflip* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0136E200, void, ctor, app::CameraFilterPack_TV_Videoflip* this_ptr)
} // namespace app::classes::CameraFilterPack_TV_Videoflip
