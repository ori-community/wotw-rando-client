#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_Drawing_Manga_Flash_Color {
    IL2CPP_REGISTER_METHOD(0x024F77C0, app::Material *, get_material, (app::CameraFilterPack_Drawing_Manga_Flash_Color * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F79A0, void, Start, (app::CameraFilterPack_Drawing_Manga_Flash_Color * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F7B30, void, OnRenderImage, (app::CameraFilterPack_Drawing_Manga_Flash_Color * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x024F7F90, void, OnValidate, (app::CameraFilterPack_Drawing_Manga_Flash_Color * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F8040, void, Update, (app::CameraFilterPack_Drawing_Manga_Flash_Color * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F8100, void, OnDisable, (app::CameraFilterPack_Drawing_Manga_Flash_Color * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F81E0, void, ctor, (app::CameraFilterPack_Drawing_Manga_Flash_Color * this_ptr))
}
