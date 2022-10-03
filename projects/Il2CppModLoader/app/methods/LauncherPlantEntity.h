#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::LauncherPlantEntity {
    IL2CPP_REGISTER_METHOD(0x00F22A00, void, OnEnable, (app::LauncherPlantEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F22CF0, void, OnDisable, (app::LauncherPlantEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F22FD0, void, Start, (app::LauncherPlantEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F23450, void, HideCatched, (app::LauncherPlantEntity * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04748F48, LauncherPlantEntity_HideCatched__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F235A0, void, Release, (app::LauncherPlantEntity * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471E320, LauncherPlantEntity_Release__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F23CE0, void, OnSoftCollision, (app::LauncherPlantEntity * this_ptr, app::Collider* collider, app::Vector2 force))
    IL2CPP_REGISTER_METHODINFO(0x04726D18, LauncherPlantEntity_OnSoftCollision__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F23D10, void, FixedUpdate, (app::LauncherPlantEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F24A00, void, DrawTrajectoryHint, (app::LauncherPlantEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F25410, void, OnTriggerStay, (app::LauncherPlantEntity * this_ptr, app::Collider* other))
    IL2CPP_REGISTER_METHOD(0x00F25660, void, ctor, (app::LauncherPlantEntity * this_ptr))
} // namespace app::classes::LauncherPlantEntity
