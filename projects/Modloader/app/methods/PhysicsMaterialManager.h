#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PhysicsMaterialManager {
    IL2CPP_REGISTER_METHOD(0x01153E30, app::Switch_1*, SurfaceMaterialTypeToSwitch, (app::PhysicsMaterialManager * this_ptr, app::SurfaceMaterialType__Enum type))
    IL2CPP_REGISTER_METHOD(0x01154000, void, Awake, (app::PhysicsMaterialManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011547E0, app::SurfaceMaterialType__Enum, ColliderMaterialToSurfaceMaterialType, (app::PhysicsMaterialManager * this_ptr, app::PhysicMaterial* material))
    IL2CPP_REGISTER_METHOD(0x011549C0, app::SurfaceMaterialType__Enum, ColliderMaterialToSurfaceMaterialTypeNoDefault, (app::PhysicsMaterialManager * this_ptr, app::PhysicMaterial* material))
    IL2CPP_REGISTER_METHOD(0x01154BA0, void, SetSurfaceDetailRtpcs, (app::PhysicsMaterialManager * this_ptr, app::GameObject* sound_host_game_object))
    IL2CPP_REGISTER_METHOD(0x01155200, void, ctor, (app::PhysicsMaterialManager * this_ptr))
} // namespace app::classes::PhysicsMaterialManager
