#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GetAbilityAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::GetAbilityAction {
    IL2CPP_REGISTER_METHOD(0x00E11760, void, Perform, (app::GetAbilityAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00E11920, void, ctor, (app::GetAbilityAction * this_ptr))
} // namespace app::classes::GetAbilityAction
