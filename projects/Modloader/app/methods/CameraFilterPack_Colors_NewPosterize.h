#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_Colors_NewPosterize {
    IL2CPP_REGISTER_METHOD(0x024E21F0, app::Material*, get_material, (app::CameraFilterPack_Colors_NewPosterize * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E23D0, void, Start, (app::CameraFilterPack_Colors_NewPosterize * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E2550, void, OnRenderImage, (app::CameraFilterPack_Colors_NewPosterize * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x024E2920, void, OnValidate, (app::CameraFilterPack_Colors_NewPosterize * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E29C0, void, Update, (app::CameraFilterPack_Colors_NewPosterize * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E2A60, void, OnDisable, (app::CameraFilterPack_Colors_NewPosterize * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024E1140, void, ctor, (app::CameraFilterPack_Colors_NewPosterize * this_ptr))
} // namespace app::classes::CameraFilterPack_Colors_NewPosterize
