#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WaitForConditionAction.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IEnumerator.h>

namespace app::classes::WaitForConditionAction {
    IL2CPP_REGISTER_METHOD(0x008C5E30, void, Perform, (app::WaitForConditionAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x008C5FA0, app::IEnumerator*, WaitAndPerform, (app::WaitForConditionAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::WaitForConditionAction * this_ptr))
} // namespace app::classes::WaitForConditionAction
