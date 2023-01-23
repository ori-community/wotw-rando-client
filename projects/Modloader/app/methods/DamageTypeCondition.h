#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DamageTypeCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::DamageTypeCondition {
    IL2CPP_REGISTER_METHOD(0x00DCA6E0, bool, Validate, (app::DamageTypeCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DamageTypeCondition * this_ptr))
} // namespace app::classes::DamageTypeCondition
