#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_Edge_Neon {
    IL2CPP_REGISTER_METHOD(0x024654E0, app::Material *, get_material, (app::CameraFilterPack_Edge_Neon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024656C0, void, Start, (app::CameraFilterPack_Edge_Neon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02465830, void, OnRenderImage, (app::CameraFilterPack_Edge_Neon * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x02465BD0, void, OnValidate, (app::CameraFilterPack_Edge_Neon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02465C60, void, Update, (app::CameraFilterPack_Edge_Neon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02465CF0, void, OnDisable, (app::CameraFilterPack_Edge_Neon * this_ptr))
    IL2CPP_REGISTER_METHOD(0x020E70F0, void, ctor, (app::CameraFilterPack_Edge_Neon * this_ptr))
}
