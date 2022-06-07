#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_FX_DigitalMatrix {
    IL2CPP_REGISTER_METHOD(0x02469ED0, app::Material *, get_material, (app::CameraFilterPack_FX_DigitalMatrix * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246A0B0, void, Start, (app::CameraFilterPack_FX_DigitalMatrix * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246A230, void, OnRenderImage, (app::CameraFilterPack_FX_DigitalMatrix * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x0246A640, void, OnValidate, (app::CameraFilterPack_FX_DigitalMatrix * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246A6E0, void, Update, (app::CameraFilterPack_FX_DigitalMatrix * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246A780, void, OnDisable, (app::CameraFilterPack_FX_DigitalMatrix * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246A860, void, ctor, (app::CameraFilterPack_FX_DigitalMatrix * this_ptr))
}
