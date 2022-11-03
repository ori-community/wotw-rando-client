#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SeinInteraction_ThrownKeystone {
    IL2CPP_REGISTER_METHOD(0x01013E80, bool, Update, (app::SeinInteraction_ThrownKeystone * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01014310, void, ctor, (app::SeinInteraction_ThrownKeystone * this_ptr))
} // namespace app::classes::SeinInteraction_ThrownKeystone
