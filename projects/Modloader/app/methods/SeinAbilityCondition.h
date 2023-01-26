#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinAbilityCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::SeinAbilityCondition {
    IL2CPP_REGISTER_METHOD(0x00D7FCA0, bool, Validate, (app::SeinAbilityCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinAbilityCondition * this_ptr))
} // namespace app::classes::SeinAbilityCondition
