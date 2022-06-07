#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_Blend2Camera_ColorDodge {
    IL2CPP_REGISTER_METHOD(0x027459A0, app::Material *, get_material, (app::CameraFilterPack_Blend2Camera_ColorDodge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02745B80, void, Start, (app::CameraFilterPack_Blend2Camera_ColorDodge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02745F40, void, OnRenderImage, (app::CameraFilterPack_Blend2Camera_ColorDodge * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x02746330, void, OnValidate, (app::CameraFilterPack_Blend2Camera_ColorDodge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02746620, void, Update, (app::CameraFilterPack_Blend2Camera_ColorDodge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027466B0, void, OnEnable, (app::CameraFilterPack_Blend2Camera_ColorDodge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02746980, void, OnDisable, (app::CameraFilterPack_Blend2Camera_ColorDodge * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02746B70, void, ctor, (app::CameraFilterPack_Blend2Camera_ColorDodge * this_ptr))
}
