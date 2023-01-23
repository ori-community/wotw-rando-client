#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_TV_ARCADE_Fast.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_TV_ARCADE_Fast {
    IL2CPP_REGISTER_METHOD(0x020E4CC0, app::Material*, get_material, (app::CameraFilterPack_TV_ARCADE_Fast * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E4EA0, void, Start, (app::CameraFilterPack_TV_ARCADE_Fast * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E5040, void, OnRenderImage, (app::CameraFilterPack_TV_ARCADE_Fast * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x020E5450, void, OnValidate, (app::CameraFilterPack_TV_ARCADE_Fast * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E54F0, void, Update, (app::CameraFilterPack_TV_ARCADE_Fast * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E5590, void, OnDisable, (app::CameraFilterPack_TV_ARCADE_Fast * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E5670, void, ctor, (app::CameraFilterPack_TV_ARCADE_Fast * this_ptr))
} // namespace app::classes::CameraFilterPack_TV_ARCADE_Fast
