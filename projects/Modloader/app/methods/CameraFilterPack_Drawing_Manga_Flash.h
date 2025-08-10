#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraFilterPack_Drawing_Manga_Flash.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Drawing_Manga_Flash {
    IL2CPP_REGISTER_METHOD(0x024F6470, app::Material*, get_material, app::CameraFilterPack_Drawing_Manga_Flash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024F6650, void, Start, app::CameraFilterPack_Drawing_Manga_Flash* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x024F67E0,
        void,
        OnRenderImage,
        app::CameraFilterPack_Drawing_Manga_Flash* this_ptr,
        app::RenderTexture* source_texture,
        app::RenderTexture* dest_texture
    )
    IL2CPP_REGISTER_METHOD(0x024F6BB0, void, OnValidate, app::CameraFilterPack_Drawing_Manga_Flash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024F6C60, void, Update, app::CameraFilterPack_Drawing_Manga_Flash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024F6D20, void, OnDisable, app::CameraFilterPack_Drawing_Manga_Flash* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024F6E00, void, ctor, app::CameraFilterPack_Drawing_Manga_Flash* this_ptr)
} // namespace app::classes::CameraFilterPack_Drawing_Manga_Flash
