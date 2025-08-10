#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SetAnimatorPropertiesAction.h>

namespace app::classes::SetAnimatorPropertiesAction {
    IL2CPP_REGISTER_METHOD(0x005A1960, void, Start, app::SetAnimatorPropertiesAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005A1A30, void, Perform, app::SetAnimatorPropertiesAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::SetAnimatorPropertiesAction* this_ptr)
} // namespace app::classes::SetAnimatorPropertiesAction
