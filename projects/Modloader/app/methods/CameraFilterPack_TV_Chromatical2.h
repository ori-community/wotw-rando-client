#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_TV_Chromatical2.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_TV_Chromatical2 {
    IL2CPP_REGISTER_METHOD(0x020E7890, app::Material*, get_material, (app::CameraFilterPack_TV_Chromatical2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E7A70, void, Start, (app::CameraFilterPack_TV_Chromatical2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E7BF0, void, OnRenderImage, (app::CameraFilterPack_TV_Chromatical2 * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x020E7FC0, void, OnValidate, (app::CameraFilterPack_TV_Chromatical2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E8060, void, Update, (app::CameraFilterPack_TV_Chromatical2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E8100, void, OnDisable, (app::CameraFilterPack_TV_Chromatical2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E81E0, void, ctor, (app::CameraFilterPack_TV_Chromatical2 * this_ptr))
} // namespace app::classes::CameraFilterPack_TV_Chromatical2
