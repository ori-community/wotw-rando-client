#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinAbilityBoundCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::SeinAbilityBoundCondition {
    IL2CPP_REGISTER_METHOD(0x00D7FB70, bool, Validate, (app::SeinAbilityBoundCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SeinAbilityBoundCondition * this_ptr))
} // namespace app::classes::SeinAbilityBoundCondition
