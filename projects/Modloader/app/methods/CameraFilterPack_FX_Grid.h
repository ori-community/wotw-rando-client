#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_FX_Grid.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_FX_Grid {
    IL2CPP_REGISTER_METHOD(0x0246F610, app::Material*, get_material, (app::CameraFilterPack_FX_Grid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246F7F0, void, Start, (app::CameraFilterPack_FX_Grid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246F960, void, OnRenderImage, (app::CameraFilterPack_FX_Grid * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x0246FBA0, void, OnValidate, (app::CameraFilterPack_FX_Grid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246FC30, void, Update, (app::CameraFilterPack_FX_Grid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246FCC0, void, OnDisable, (app::CameraFilterPack_FX_Grid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E70F0, void, ctor, (app::CameraFilterPack_FX_Grid * this_ptr))
} // namespace app::classes::CameraFilterPack_FX_Grid
