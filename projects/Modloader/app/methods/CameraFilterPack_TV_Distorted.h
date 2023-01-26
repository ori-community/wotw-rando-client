#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_TV_Distorted.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_TV_Distorted {
    IL2CPP_REGISTER_METHOD(0x020E8960, app::Material*, get_material, (app::CameraFilterPack_TV_Distorted * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E8B40, void, Start, (app::CameraFilterPack_TV_Distorted * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E8CB0, void, OnRenderImage, (app::CameraFilterPack_TV_Distorted * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x020E8F30, void, OnValidate, (app::CameraFilterPack_TV_Distorted * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E8FC0, void, Update, (app::CameraFilterPack_TV_Distorted * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E9050, void, OnDisable, (app::CameraFilterPack_TV_Distorted * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E9130, void, ctor, (app::CameraFilterPack_TV_Distorted * this_ptr))
} // namespace app::classes::CameraFilterPack_TV_Distorted
