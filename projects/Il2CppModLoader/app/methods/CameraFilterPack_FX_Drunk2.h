#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_FX_Drunk2 {
    IL2CPP_REGISTER_METHOD(0x0246C2F0, app::Material *, get_material, (app::CameraFilterPack_FX_Drunk2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246C4D0, void, Start, (app::CameraFilterPack_FX_Drunk2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246C650, void, OnRenderImage, (app::CameraFilterPack_FX_Drunk2 * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x0246CA20, void, OnValidate, (app::CameraFilterPack_FX_Drunk2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246CAC0, void, Update, (app::CameraFilterPack_FX_Drunk2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246CB60, void, OnDisable, (app::CameraFilterPack_FX_Drunk2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F7040, void, ctor, (app::CameraFilterPack_FX_Drunk2 * this_ptr))
}
