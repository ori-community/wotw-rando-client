#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_Drawing_Manga3.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Drawing_Manga3 {
    IL2CPP_REGISTER_METHOD(0x024F4610, app::Material*, get_material, (app::CameraFilterPack_Drawing_Manga3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F47F0, void, Start, (app::CameraFilterPack_Drawing_Manga3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F4960, void, OnRenderImage, (app::CameraFilterPack_Drawing_Manga3 * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024F4BA0, void, OnValidate, (app::CameraFilterPack_Drawing_Manga3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F4C30, void, Update, (app::CameraFilterPack_Drawing_Manga3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F4CC0, void, OnDisable, (app::CameraFilterPack_Drawing_Manga3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F3E60, void, ctor, (app::CameraFilterPack_Drawing_Manga3 * this_ptr))
} // namespace app::classes::CameraFilterPack_Drawing_Manga3
