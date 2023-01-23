#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HasVisitedOrDiscoveredAreaCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::HasVisitedOrDiscoveredAreaCondition {
    IL2CPP_REGISTER_METHOD(0x0109F0B0, bool, Validate, (app::HasVisitedOrDiscoveredAreaCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x008223A0, void, ctor, (app::HasVisitedOrDiscoveredAreaCondition * this_ptr))
} // namespace app::classes::HasVisitedOrDiscoveredAreaCondition
