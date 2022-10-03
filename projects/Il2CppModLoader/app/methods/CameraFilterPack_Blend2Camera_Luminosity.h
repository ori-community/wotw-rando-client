#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_Blend2Camera_Luminosity {
    IL2CPP_REGISTER_METHOD(0x02756860, app::Material*, get_material, (app::CameraFilterPack_Blend2Camera_Luminosity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02756A40, void, Start, (app::CameraFilterPack_Blend2Camera_Luminosity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02756E00, void, OnRenderImage, (app::CameraFilterPack_Blend2Camera_Luminosity * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x027571F0, void, OnValidate, (app::CameraFilterPack_Blend2Camera_Luminosity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027574E0, void, Update, (app::CameraFilterPack_Blend2Camera_Luminosity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02757570, void, OnEnable, (app::CameraFilterPack_Blend2Camera_Luminosity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02757840, void, OnDisable, (app::CameraFilterPack_Blend2Camera_Luminosity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02757A30, void, ctor, (app::CameraFilterPack_Blend2Camera_Luminosity * this_ptr))
} // namespace app::classes::CameraFilterPack_Blend2Camera_Luminosity
