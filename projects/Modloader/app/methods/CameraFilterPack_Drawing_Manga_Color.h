#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_Drawing_Manga_Color {
    IL2CPP_REGISTER_METHOD(0x024F5CC0, app::Material*, get_material, (app::CameraFilterPack_Drawing_Manga_Color * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F5EA0, void, Start, (app::CameraFilterPack_Drawing_Manga_Color * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F6010, void, OnRenderImage, (app::CameraFilterPack_Drawing_Manga_Color * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024F6250, void, OnValidate, (app::CameraFilterPack_Drawing_Manga_Color * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F62E0, void, Update, (app::CameraFilterPack_Drawing_Manga_Color * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F6370, void, OnDisable, (app::CameraFilterPack_Drawing_Manga_Color * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F6450, void, ctor, (app::CameraFilterPack_Drawing_Manga_Color * this_ptr))
} // namespace app::classes::CameraFilterPack_Drawing_Manga_Color
