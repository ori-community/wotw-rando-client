#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CameraFilterPack_Alien_Vision {
    IL2CPP_REGISTER_METHOD(0x0273E9E0, app::Material*, get_material, (app::CameraFilterPack_Alien_Vision * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273EBC0, void, Start, (app::CameraFilterPack_Alien_Vision * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273ED40, void, OnRenderImage, (app::CameraFilterPack_Alien_Vision * this_ptr, app::RenderTexture* source_texture, app::RenderTexture* dest_texture))
    IL2CPP_REGISTER_METHOD(0x0273F110, void, OnValidate, (app::CameraFilterPack_Alien_Vision * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273F1B0, void, Update, (app::CameraFilterPack_Alien_Vision * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273F250, void, OnDisable, (app::CameraFilterPack_Alien_Vision * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0273F330, void, ctor, (app::CameraFilterPack_Alien_Vision * this_ptr))
} // namespace app::classes::CameraFilterPack_Alien_Vision
