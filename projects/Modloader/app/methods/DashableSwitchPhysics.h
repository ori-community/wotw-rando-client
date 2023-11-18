#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DashableSwitchPhysics.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/IMoonSetupLogic.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::DashableSwitchPhysics {
    IL2CPP_REGISTER_METHOD(0x00DD2EE0, bool, get_IsOn, (app::DashableSwitchPhysics * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonSetupLogic*, get_MoonSetupLogic, (app::DashableSwitchPhysics * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DD2F00, void, set_MoonSetupLogic, (app::DashableSwitchPhysics * this_ptr, app::IMoonSetupLogic* value))
    IL2CPP_REGISTER_METHOD(0x00DD2FD0, void, OnDashHit, (app::DashableSwitchPhysics * this_ptr, app::Vector3 impact_velocity))
    IL2CPP_REGISTER_METHOD(0x00DD3120, void, OnCollisionEnter, (app::DashableSwitchPhysics * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DashableSwitchPhysics * this_ptr))
} // namespace app::classes::DashableSwitchPhysics
