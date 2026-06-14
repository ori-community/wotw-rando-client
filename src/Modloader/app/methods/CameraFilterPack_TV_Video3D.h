#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_TV_Video3D.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_TV_Video3D {
    IL2CPP_REGISTER_METHOD(0x020EFEF0, app::Material*, get_material, app::CameraFilterPack_TV_Video3D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020F00D0, void, Start, app::CameraFilterPack_TV_Video3D* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x020F0220,
        void,
        OnRenderImage,
        app::CameraFilterPack_TV_Video3D* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, app::CameraFilterPack_TV_Video3D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x020F0510, void, OnDisable, app::CameraFilterPack_TV_Video3D* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0136E200, void, ctor, app::CameraFilterPack_TV_Video3D* this_ptr)
} // namespace app::classes::CameraFilterPack_TV_Video3D
