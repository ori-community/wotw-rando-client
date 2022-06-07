#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_OldFilm_Cutting2 {
    IL2CPP_REGISTER_METHOD(0x02487F60, app::Material *, get_material, (app::CameraFilterPack_OldFilm_Cutting2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02488140, void, Start, (app::CameraFilterPack_OldFilm_Cutting2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024882C0, void, OnRenderImage, (app::CameraFilterPack_OldFilm_Cutting2 * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_OldFilm_Cutting2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02488600, void, OnDisable, (app::CameraFilterPack_OldFilm_Cutting2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024886E0, void, ctor, (app::CameraFilterPack_OldFilm_Cutting2 * this_ptr))
}
