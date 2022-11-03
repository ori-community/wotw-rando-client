#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::DiscoveredAreaPercentageCondition {
    IL2CPP_REGISTER_METHOD(0x00B98EF0, bool, Validate, (app::DiscoveredAreaPercentageCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DiscoveredAreaPercentageCondition * this_ptr))
} // namespace app::classes::DiscoveredAreaPercentageCondition
