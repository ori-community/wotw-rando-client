#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinAbilityEquippedCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::SeinAbilityEquippedCondition {
    IL2CPP_REGISTER_METHOD(0x00D7FD90, bool, Validate, (app::SeinAbilityEquippedCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinAbilityEquippedCondition * this_ptr))
} // namespace app::classes::SeinAbilityEquippedCondition
