#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraFilterPack_Blend2Camera_Saturation {
    IL2CPP_REGISTER_METHOD(0x0275C8D0, app::Material *, get_material, (app::CameraFilterPack_Blend2Camera_Saturation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0275CAB0, void, Start, (app::CameraFilterPack_Blend2Camera_Saturation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0275CE70, void, OnRenderImage, (app::CameraFilterPack_Blend2Camera_Saturation * this_ptr, app::RenderTexture * source_texture, app::RenderTexture * dest_texture))
    IL2CPP_REGISTER_METHOD(0x0275D260, void, OnValidate, (app::CameraFilterPack_Blend2Camera_Saturation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0275D550, void, Update, (app::CameraFilterPack_Blend2Camera_Saturation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0275D5E0, void, OnEnable, (app::CameraFilterPack_Blend2Camera_Saturation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0275D8B0, void, OnDisable, (app::CameraFilterPack_Blend2Camera_Saturation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0275DAA0, void, ctor, (app::CameraFilterPack_Blend2Camera_Saturation * this_ptr))
}
