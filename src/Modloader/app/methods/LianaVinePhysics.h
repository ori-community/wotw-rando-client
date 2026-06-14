#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IMoonSetupLogic.h>
#include <Modloader/app/structs/LianaVinePhysics.h>

namespace app::classes::LianaVinePhysics {
    IL2CPP_REGISTER_METHOD(0x002FB990, app::IMoonSetupLogic*, get_MoonSetupLogic, app::LianaVinePhysics* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0113F6E0, void, set_MoonSetupLogic, app::LianaVinePhysics* this_ptr, app::IMoonSetupLogic* value)
    IL2CPP_REGISTER_METHOD(0x0113F7B0, void, Awake, app::LianaVinePhysics* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::LianaVinePhysics* this_ptr)
} // namespace app::classes::LianaVinePhysics
