#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Light_Water2.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Light_Water2 {
    IL2CPP_REGISTER_METHOD(0x0247FE20, app::Material*, get_material, app::CameraFilterPack_Light_Water2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02480000, void, Start, app::CameraFilterPack_Light_Water2* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02480180,
        void,
        OnRenderImage,
        app::CameraFilterPack_Light_Water2* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x02480550, void, OnValidate, app::CameraFilterPack_Light_Water2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024805F0, void, Update, app::CameraFilterPack_Light_Water2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02480690, void, OnDisable, app::CameraFilterPack_Light_Water2* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02480770, void, ctor, app::CameraFilterPack_Light_Water2* this_ptr)
} // namespace app::classes::CameraFilterPack_Light_Water2
