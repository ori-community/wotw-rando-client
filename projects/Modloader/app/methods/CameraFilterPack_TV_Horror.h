#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_TV_Horror {
    IL2CPP_REGISTER_METHOD(0x020E9150, app::Material*, get_material, (app::CameraFilterPack_TV_Horror * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E9330, void, Start, (app::CameraFilterPack_TV_Horror * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E94D0, void, OnRenderImage, (app::CameraFilterPack_TV_Horror * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x020E98E0, void, OnValidate, (app::CameraFilterPack_TV_Horror * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E9980, void, Update, (app::CameraFilterPack_TV_Horror * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E9A20, void, OnDisable, (app::CameraFilterPack_TV_Horror * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E9B00, void, ctor, (app::CameraFilterPack_TV_Horror * this_ptr))
} // namespace app::classes::CameraFilterPack_TV_Horror
