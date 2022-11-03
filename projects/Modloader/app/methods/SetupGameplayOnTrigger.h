#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SetupGameplayOnTrigger {
    IL2CPP_REGISTER_METHOD(0x005A5D60, void, Awake, (app::SetupGameplayOnTrigger * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A5F40, void, SetupGameplay, (app::SetupGameplayOnTrigger * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04740988, SetupGameplayOnTrigger_SetupGameplay__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SetupGameplayOnTrigger * this_ptr))
} // namespace app::classes::SetupGameplayOnTrigger
