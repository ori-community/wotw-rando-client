#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_OldFilm_Cutting1 {
    IL2CPP_REGISTER_METHOD(0x024877C0, app::Material *, get_material, (app::CameraFilterPack_OldFilm_Cutting1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024879A0, void, Start, (app::CameraFilterPack_OldFilm_Cutting1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02487B20, void, OnRenderImage, (app::CameraFilterPack_OldFilm_Cutting1 * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_OldFilm_Cutting1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02487E50, void, OnDisable, (app::CameraFilterPack_OldFilm_Cutting1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02487F30, void, ctor, (app::CameraFilterPack_OldFilm_Cutting1 * this_ptr))
}
