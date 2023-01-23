#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ModularZoneActiveCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::ModularZoneActiveCondition {
    IL2CPP_REGISTER_METHOD(0x013313B0, bool, Validate, (app::ModularZoneActiveCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ModularZoneActiveCondition * this_ptr))
} // namespace app::classes::ModularZoneActiveCondition
