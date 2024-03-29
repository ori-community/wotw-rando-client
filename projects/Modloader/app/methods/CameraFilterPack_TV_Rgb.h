#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_TV_Rgb.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_TV_Rgb {
    IL2CPP_REGISTER_METHOD(0x020ED3B0, app::Material*, get_material, (app::CameraFilterPack_TV_Rgb * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020ED590, void, Start, (app::CameraFilterPack_TV_Rgb * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020ED6E0, void, OnRenderImage, (app::CameraFilterPack_TV_Rgb * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_TV_Rgb * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020EDA00, void, OnDisable, (app::CameraFilterPack_TV_Rgb * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E8940, void, ctor, (app::CameraFilterPack_TV_Rgb * this_ptr))
} // namespace app::classes::CameraFilterPack_TV_Rgb
