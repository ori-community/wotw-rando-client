#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_AAA_Blood.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_AAA_Blood {
    IL2CPP_REGISTER_METHOD(0x0273A040, app::Material*, get_material, app::CameraFilterPack_AAA_Blood* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0273A220, void, Start, app::CameraFilterPack_AAA_Blood* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0273A3A0,
        void,
        OnRenderImage,
        app::CameraFilterPack_AAA_Blood* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, app::CameraFilterPack_AAA_Blood* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0273A700, void, OnDisable, app::CameraFilterPack_AAA_Blood* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020E6620, void, ctor, app::CameraFilterPack_AAA_Blood* this_ptr)
} // namespace app::classes::CameraFilterPack_AAA_Blood
