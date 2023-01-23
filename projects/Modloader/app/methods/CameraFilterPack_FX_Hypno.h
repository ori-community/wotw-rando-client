#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_FX_Hypno.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_FX_Hypno {
    IL2CPP_REGISTER_METHOD(0x02470D10, app::Material*, get_material, (app::CameraFilterPack_FX_Hypno * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02470EF0, void, Start, (app::CameraFilterPack_FX_Hypno * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02471070, void, OnRenderImage, (app::CameraFilterPack_FX_Hypno * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x02471440, void, OnValidate, (app::CameraFilterPack_FX_Hypno * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024714E0, void, Update, (app::CameraFilterPack_FX_Hypno * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02471580, void, OnDisable, (app::CameraFilterPack_FX_Hypno * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02471660, void, ctor, (app::CameraFilterPack_FX_Hypno * this_ptr))
} // namespace app::classes::CameraFilterPack_FX_Hypno
