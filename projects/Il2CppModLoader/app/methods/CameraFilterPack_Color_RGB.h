#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_Color_RGB {
    IL2CPP_REGISTER_METHOD(0x024DB110, app::Material *, get_material, (app::CameraFilterPack_Color_RGB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024DB2F0, void, Start, (app::CameraFilterPack_Color_RGB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024DB460, void, OnRenderImage, (app::CameraFilterPack_Color_RGB * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x024DB7D0, void, OnValidate, (app::CameraFilterPack_Color_RGB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024DB860, void, Update, (app::CameraFilterPack_Color_RGB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024DB8F0, void, OnDisable, (app::CameraFilterPack_Color_RGB * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024DB9D0, void, ctor, (app::CameraFilterPack_Color_RGB * this_ptr))
}
