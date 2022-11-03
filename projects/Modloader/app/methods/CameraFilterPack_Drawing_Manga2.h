#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_Drawing_Manga2 {
    IL2CPP_REGISTER_METHOD(0x024F3E80, app::Material*, get_material, (app::CameraFilterPack_Drawing_Manga2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F4060, void, Start, (app::CameraFilterPack_Drawing_Manga2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F41D0, void, OnRenderImage, (app::CameraFilterPack_Drawing_Manga2 * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024F4410, void, OnValidate, (app::CameraFilterPack_Drawing_Manga2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F44A0, void, Update, (app::CameraFilterPack_Drawing_Manga2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F4530, void, OnDisable, (app::CameraFilterPack_Drawing_Manga2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F3E60, void, ctor, (app::CameraFilterPack_Drawing_Manga2 * this_ptr))
} // namespace app::classes::CameraFilterPack_Drawing_Manga2
