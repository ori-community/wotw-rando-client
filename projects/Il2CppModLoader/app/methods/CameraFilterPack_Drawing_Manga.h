#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_Drawing_Manga {
    IL2CPP_REGISTER_METHOD(0x024F36D0, app::Material*, get_material, (app::CameraFilterPack_Drawing_Manga * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F38B0, void, Start, (app::CameraFilterPack_Drawing_Manga * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F3A20, void, OnRenderImage, (app::CameraFilterPack_Drawing_Manga * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024F3C60, void, OnValidate, (app::CameraFilterPack_Drawing_Manga * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F3CF0, void, Update, (app::CameraFilterPack_Drawing_Manga * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F3D80, void, OnDisable, (app::CameraFilterPack_Drawing_Manga * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F3E60, void, ctor, (app::CameraFilterPack_Drawing_Manga * this_ptr))
} // namespace app::classes::CameraFilterPack_Drawing_Manga
