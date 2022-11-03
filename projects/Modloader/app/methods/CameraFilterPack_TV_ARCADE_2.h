#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_TV_ARCADE_2 {
    IL2CPP_REGISTER_METHOD(0x020E4340, app::Material*, get_material, (app::CameraFilterPack_TV_ARCADE_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E4520, void, Start, (app::CameraFilterPack_TV_ARCADE_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E46A0, void, OnRenderImage, (app::CameraFilterPack_TV_ARCADE_2 * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x020E4A70, void, OnValidate, (app::CameraFilterPack_TV_ARCADE_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E4B10, void, Update, (app::CameraFilterPack_TV_ARCADE_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E4BB0, void, OnDisable, (app::CameraFilterPack_TV_ARCADE_2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E4C90, void, ctor, (app::CameraFilterPack_TV_ARCADE_2 * this_ptr))
} // namespace app::classes::CameraFilterPack_TV_ARCADE_2
