#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_TV_WideScreenCircle {
    IL2CPP_REGISTER_METHOD(0x020F1480, app::Material *, get_material, (app::CameraFilterPack_TV_WideScreenCircle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F1660, void, Start, (app::CameraFilterPack_TV_WideScreenCircle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F17E0, void, OnRenderImage, (app::CameraFilterPack_TV_WideScreenCircle * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x020F1BB0, void, OnValidate, (app::CameraFilterPack_TV_WideScreenCircle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F1C50, void, Update, (app::CameraFilterPack_TV_WideScreenCircle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F1CF0, void, OnDisable, (app::CameraFilterPack_TV_WideScreenCircle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F1DD0, void, ctor, (app::CameraFilterPack_TV_WideScreenCircle * this_ptr))
}
