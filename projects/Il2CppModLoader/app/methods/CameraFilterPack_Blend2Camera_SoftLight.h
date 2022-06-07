#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_Blend2Camera_SoftLight {
    IL2CPP_REGISTER_METHOD(0x0275EDB0, app::Material *, get_material, (app::CameraFilterPack_Blend2Camera_SoftLight * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0275EF90, void, Start, (app::CameraFilterPack_Blend2Camera_SoftLight * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0275F350, void, OnRenderImage, (app::CameraFilterPack_Blend2Camera_SoftLight * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x0275F740, void, OnValidate, (app::CameraFilterPack_Blend2Camera_SoftLight * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0275FA30, void, Update, (app::CameraFilterPack_Blend2Camera_SoftLight * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0275FAC0, void, OnEnable, (app::CameraFilterPack_Blend2Camera_SoftLight * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0275FD90, void, OnDisable, (app::CameraFilterPack_Blend2Camera_SoftLight * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0275FF80, void, ctor, (app::CameraFilterPack_Blend2Camera_SoftLight * this_ptr))
}
