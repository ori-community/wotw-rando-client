#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HasUnlockedAnyCutscenesCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::HasUnlockedAnyCutscenesCondition {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, Validate, (app::HasUnlockedAnyCutscenesCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::HasUnlockedAnyCutscenesCondition * this_ptr))
} // namespace app::classes::HasUnlockedAnyCutscenesCondition
