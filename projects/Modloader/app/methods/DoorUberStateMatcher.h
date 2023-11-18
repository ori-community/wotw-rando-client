#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DoorUberStateMatcher.h>
#include <Modloader/app/structs/DesiredUberStateDoor_DoorState__Enum.h>

namespace app::classes::DoorUberStateMatcher {
    IL2CPP_REGISTER_METHOD(0x01B5A360, void, ctor, (app::DoorUberStateMatcher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5A5D0, app::DesiredUberStateDoor_DoorState__Enum, BoolToDoorState, (bool input))
    IL2CPP_REGISTER_METHOD(0x01B5A5E0, bool, DoorStateToBool, (app::DesiredUberStateDoor_DoorState__Enum input))
} // namespace app::classes::DoorUberStateMatcher
