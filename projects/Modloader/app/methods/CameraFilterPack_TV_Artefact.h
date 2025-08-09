#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_TV_Artefact.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_TV_Artefact {
    IL2CPP_REGISTER_METHOD(0x020E56A0, app::Material*, get_material, app::CameraFilterPack_TV_Artefact* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020E5880, void, Start, app::CameraFilterPack_TV_Artefact* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x020E59D0,
        void,
        OnRenderImage,
        app::CameraFilterPack_TV_Artefact* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, app::CameraFilterPack_TV_Artefact* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020E5D70, void, OnDisable, app::CameraFilterPack_TV_Artefact* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020E5E50, void, ctor, app::CameraFilterPack_TV_Artefact* this_ptr)
} // namespace app::classes::CameraFilterPack_TV_Artefact
