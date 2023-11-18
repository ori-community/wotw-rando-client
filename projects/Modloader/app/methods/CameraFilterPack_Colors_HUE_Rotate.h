#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/CameraFilterPack_Colors_HUE_Rotate.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CameraFilterPack_Colors_HUE_Rotate {
    IL2CPP_REGISTER_METHOD(0x024E18E0, app::Material*, get_material, (app::CameraFilterPack_Colors_HUE_Rotate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E1AC0, void, Start, (app::CameraFilterPack_Colors_HUE_Rotate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E1C30, void, OnRenderImage, (app::CameraFilterPack_Colors_HUE_Rotate * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024E1FD0, void, OnValidate, (app::CameraFilterPack_Colors_HUE_Rotate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E2060, void, Update, (app::CameraFilterPack_Colors_HUE_Rotate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E20F0, void, OnDisable, (app::CameraFilterPack_Colors_HUE_Rotate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E21D0, void, ctor, (app::CameraFilterPack_Colors_HUE_Rotate * this_ptr))
} // namespace app::classes::CameraFilterPack_Colors_HUE_Rotate
