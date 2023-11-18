#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_Sharpen_Sharpen.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Sharpen_Sharpen {
    IL2CPP_REGISTER_METHOD(0x020E1BF0, app::Material*, get_material, (app::CameraFilterPack_Sharpen_Sharpen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E1DD0, void, Start, (app::CameraFilterPack_Sharpen_Sharpen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E1F40, void, OnRenderImage, (app::CameraFilterPack_Sharpen_Sharpen * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x020E22A0, void, OnValidate, (app::CameraFilterPack_Sharpen_Sharpen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E2330, void, Update, (app::CameraFilterPack_Sharpen_Sharpen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E23C0, void, OnDisable, (app::CameraFilterPack_Sharpen_Sharpen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E24A0, void, ctor, (app::CameraFilterPack_Sharpen_Sharpen * this_ptr))
} // namespace app::classes::CameraFilterPack_Sharpen_Sharpen
