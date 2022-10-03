#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_FX_DarkMatter {
    IL2CPP_REGISTER_METHOD(0x02469630, app::Material*, get_material, (app::CameraFilterPack_FX_DarkMatter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02469810, void, Start, (app::CameraFilterPack_FX_DarkMatter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02469960, void, OnRenderImage, (app::CameraFilterPack_FX_DarkMatter * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_FX_DarkMatter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02469DB0, void, OnDisable, (app::CameraFilterPack_FX_DarkMatter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02469E90, void, ctor, (app::CameraFilterPack_FX_DarkMatter * this_ptr))
} // namespace app::classes::CameraFilterPack_FX_DarkMatter
