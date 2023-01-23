#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DoorUberStatePair.h>

namespace app::classes::DoorUberStatePair {
    IL2CPP_REGISTER_METHOD(0x01B5A5F0, bool, get_EffectiveValue, (app::DoorUberStatePair * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DoorUberStatePair * this_ptr))
} // namespace app::classes::DoorUberStatePair
