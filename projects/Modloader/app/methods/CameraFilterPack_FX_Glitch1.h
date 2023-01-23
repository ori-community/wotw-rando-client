#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_FX_Glitch1.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_FX_Glitch1 {
    IL2CPP_REGISTER_METHOD(0x0246DCC0, app::Material*, get_material, (app::CameraFilterPack_FX_Glitch1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246DEA0, void, Start, (app::CameraFilterPack_FX_Glitch1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246E010, void, OnRenderImage, (app::CameraFilterPack_FX_Glitch1 * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x0246E330, void, OnValidate, (app::CameraFilterPack_FX_Glitch1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246E3C0, void, Update, (app::CameraFilterPack_FX_Glitch1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246E450, void, OnDisable, (app::CameraFilterPack_FX_Glitch1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0246C2D0, void, ctor, (app::CameraFilterPack_FX_Glitch1 * this_ptr))
} // namespace app::classes::CameraFilterPack_FX_Glitch1
