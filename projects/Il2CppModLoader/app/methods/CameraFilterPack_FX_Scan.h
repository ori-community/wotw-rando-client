#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_FX_Scan {
    IL2CPP_REGISTER_METHOD(0x024734B0, app::Material *, get_material, (app::CameraFilterPack_FX_Scan * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02473690, void, Start, (app::CameraFilterPack_FX_Scan * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02473810, void, OnRenderImage, (app::CameraFilterPack_FX_Scan * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x02473BE0, void, OnValidate, (app::CameraFilterPack_FX_Scan * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02473C80, void, Update, (app::CameraFilterPack_FX_Scan * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02473D20, void, OnDisable, (app::CameraFilterPack_FX_Scan * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02473E00, void, ctor, (app::CameraFilterPack_FX_Scan * this_ptr))
}
