#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_Pixelisation_Dot {
    IL2CPP_REGISTER_METHOD(0x02488E80, app::Material *, get_material, (app::CameraFilterPack_Pixelisation_Dot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02489060, void, Start, (app::CameraFilterPack_Pixelisation_Dot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024891E0, void, OnRenderImage, (app::CameraFilterPack_Pixelisation_Dot * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x024895B0, void, OnValidate, (app::CameraFilterPack_Pixelisation_Dot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02489650, void, Update, (app::CameraFilterPack_Pixelisation_Dot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024896F0, void, OnDisable, (app::CameraFilterPack_Pixelisation_Dot * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024897D0, void, ctor, (app::CameraFilterPack_Pixelisation_Dot * this_ptr))
}
