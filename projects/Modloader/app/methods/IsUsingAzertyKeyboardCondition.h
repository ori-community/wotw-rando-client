#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IsUsingAzertyKeyboardCondition.h>

namespace app::classes::IsUsingAzertyKeyboardCondition {
    IL2CPP_REGISTER_METHOD(0x00648C70, bool, Validate, app::IsUsingAzertyKeyboardCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::IsUsingAzertyKeyboardCondition* this_ptr)
} // namespace app::classes::IsUsingAzertyKeyboardCondition
