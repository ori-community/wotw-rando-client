#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_Drawing_Comics {
    IL2CPP_REGISTER_METHOD(0x024EFC40, app::Material*, get_material, (app::CameraFilterPack_Drawing_Comics * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EFE20, void, Start, (app::CameraFilterPack_Drawing_Comics * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024EFF90, void, OnRenderImage, (app::CameraFilterPack_Drawing_Comics * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024F01D0, void, OnValidate, (app::CameraFilterPack_Drawing_Comics * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F0260, void, Update, (app::CameraFilterPack_Drawing_Comics * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F02F0, void, OnDisable, (app::CameraFilterPack_Drawing_Comics * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F03D0, void, ctor, (app::CameraFilterPack_Drawing_Comics * this_ptr))
} // namespace app::classes::CameraFilterPack_Drawing_Comics
