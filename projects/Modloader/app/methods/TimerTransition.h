#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TimerTransition.h>

namespace app::classes::TimerTransition {
    IL2CPP_REGISTER_METHOD(0x010F9340, bool, ShouldTransition, (app::TimerTransition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TimerTransition * this_ptr))
} // namespace app::classes::TimerTransition
