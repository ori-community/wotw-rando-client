#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_Drawing_Manga5.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Drawing_Manga5 {
    IL2CPP_REGISTER_METHOD(0x024F5530, app::Material*, get_material, (app::CameraFilterPack_Drawing_Manga5 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F5710, void, Start, (app::CameraFilterPack_Drawing_Manga5 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F5880, void, OnRenderImage, (app::CameraFilterPack_Drawing_Manga5 * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024F5AC0, void, OnValidate, (app::CameraFilterPack_Drawing_Manga5 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F5B50, void, Update, (app::CameraFilterPack_Drawing_Manga5 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F5BE0, void, OnDisable, (app::CameraFilterPack_Drawing_Manga5 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024F3E60, void, ctor, (app::CameraFilterPack_Drawing_Manga5 * this_ptr))
} // namespace app::classes::CameraFilterPack_Drawing_Manga5
