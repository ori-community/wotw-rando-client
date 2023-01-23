#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinRide_RideState.h>
#include <Modloader/app/structs/SeinRide.h>
#include <Modloader/app/structs/IRideable.h>

namespace app::classes::SeinRide_RideState {
    IL2CPP_REGISTER_METHOD(0x005D6970, void, Initialize, (app::SeinRide_RideState * this_ptr, app::SeinRide* sein_ride))
    IL2CPP_REGISTER_METHOD(0x005D6A40, void, OnBegin, (app::SeinRide_RideState * this_ptr, app::IRideable* rideable, bool skip_mount_animation))
    IL2CPP_REGISTER_METHOD(0x005D6C50, void, OnEnd, (app::SeinRide_RideState * this_ptr, app::IRideable* rideable))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SeinRide_RideState * this_ptr))
} // namespace app::classes::SeinRide_RideState
