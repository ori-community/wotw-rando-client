#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_Vision_Psycho.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Vision_Psycho {
    IL2CPP_REGISTER_METHOD(0x020F8D00, app::Material*, get_material, (app::CameraFilterPack_Vision_Psycho * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F8EE0, void, Start, (app::CameraFilterPack_Vision_Psycho * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F9060, void, OnRenderImage, (app::CameraFilterPack_Vision_Psycho * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x020F9430, void, OnValidate, (app::CameraFilterPack_Vision_Psycho * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F94D0, void, Update, (app::CameraFilterPack_Vision_Psycho * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F9570, void, OnDisable, (app::CameraFilterPack_Vision_Psycho * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020F5EE0, void, ctor, (app::CameraFilterPack_Vision_Psycho * this_ptr))
} // namespace app::classes::CameraFilterPack_Vision_Psycho
