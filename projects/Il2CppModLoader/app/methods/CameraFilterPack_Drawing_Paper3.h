#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_Drawing_Paper3 {
    IL2CPP_REGISTER_METHOD(0x024F9CD0, app::Material*, get_material, (app::CameraFilterPack_Drawing_Paper3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F9EB0, void, Start, (app::CameraFilterPack_Drawing_Paper3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024FA030, void, OnRenderImage, (app::CameraFilterPack_Drawing_Paper3 * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_Drawing_Paper3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024FA510, void, OnDisable, (app::CameraFilterPack_Drawing_Paper3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024FA5F0, void, ctor, (app::CameraFilterPack_Drawing_Paper3 * this_ptr))
} // namespace app::classes::CameraFilterPack_Drawing_Paper3
