#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_FX_Screens.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_FX_Screens {
    IL2CPP_REGISTER_METHOD(0x02473E30, app::Material*, get_material, (app::CameraFilterPack_FX_Screens * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02474010, void, Start, (app::CameraFilterPack_FX_Screens * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02474190, void, OnRenderImage, (app::CameraFilterPack_FX_Screens * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x02474560, void, OnValidate, (app::CameraFilterPack_FX_Screens * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02474600, void, Update, (app::CameraFilterPack_FX_Screens * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024746A0, void, OnDisable, (app::CameraFilterPack_FX_Screens * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02474780, void, ctor, (app::CameraFilterPack_FX_Screens * this_ptr))
} // namespace app::classes::CameraFilterPack_FX_Screens
