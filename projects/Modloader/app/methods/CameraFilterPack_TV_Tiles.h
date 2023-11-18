#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_TV_Tiles.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_TV_Tiles {
    IL2CPP_REGISTER_METHOD(0x020EDAE0, app::Material*, get_material, (app::CameraFilterPack_TV_Tiles * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EDCC0, void, Start, (app::CameraFilterPack_TV_Tiles * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EDE40, void, OnRenderImage, (app::CameraFilterPack_TV_Tiles * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x020EE210, void, OnValidate, (app::CameraFilterPack_TV_Tiles * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EE2B0, void, Update, (app::CameraFilterPack_TV_Tiles * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EE350, void, OnDisable, (app::CameraFilterPack_TV_Tiles * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EE430, void, ctor, (app::CameraFilterPack_TV_Tiles * this_ptr))
} // namespace app::classes::CameraFilterPack_TV_Tiles
