#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DesiredUberStateDoor.h>

namespace app::classes::DesiredUberStateDoor {
    IL2CPP_REGISTER_METHOD(0x006CA2A0, bool, get_BoolDesiredValue, app::DesiredUberStateDoor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DesiredUberStateDoor* this_ptr)
} // namespace app::classes::DesiredUberStateDoor
