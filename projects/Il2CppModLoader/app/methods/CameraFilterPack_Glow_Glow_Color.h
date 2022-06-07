#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_Glow_Glow_Color {
    IL2CPP_REGISTER_METHOD(0x024791C0, app::Material *, get_material, (app::CameraFilterPack_Glow_Glow_Color * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024793A0, void, Start, (app::CameraFilterPack_Glow_Glow_Color * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02479510, void, OnRenderImage, (app::CameraFilterPack_Glow_Glow_Color * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x02479D40, void, OnValidate, (app::CameraFilterPack_Glow_Glow_Color * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02479DD0, void, Update, (app::CameraFilterPack_Glow_Glow_Color * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02479E70, void, OnDisable, (app::CameraFilterPack_Glow_Glow_Color * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02479F50, void, ctor, (app::CameraFilterPack_Glow_Glow_Color * this_ptr))
}
