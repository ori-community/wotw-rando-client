#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CameraFilterPack_Atmosphere_Rain {
    IL2CPP_REGISTER_METHOD(0x0273FAD0, app::Material*, get_material, (app::CameraFilterPack_Atmosphere_Rain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273FCB0, void, Start, (app::CameraFilterPack_Atmosphere_Rain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273FE30, void, OnRenderImage, (app::CameraFilterPack_Atmosphere_Rain * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::CameraFilterPack_Atmosphere_Rain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027402F0, void, OnDisable, (app::CameraFilterPack_Atmosphere_Rain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027403D0, void, ctor, (app::CameraFilterPack_Atmosphere_Rain * this_ptr))
} // namespace app::classes::CameraFilterPack_Atmosphere_Rain
