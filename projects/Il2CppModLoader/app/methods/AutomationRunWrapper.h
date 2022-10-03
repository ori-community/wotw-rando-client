#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::AutomationRunWrapper {
    IL2CPP_REGISTER_METHOD(0x0085E380, void, ctor, (app::AutomationRunWrapper * this_ptr, app::AutomationRunType__Enum type))
    IL2CPP_REGISTER_METHOD(0x0085E480, void, Process, (app::AutomationRunWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0085E600, void, ProcessHasNotStartedYet, (app::AutomationRunWrapper * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478E358, AutomationRunWrapper_ProcessHasNotStartedYet__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0085E9C0, void, ProcessStarted, (app::AutomationRunWrapper * this_ptr))
} // namespace app::classes::AutomationRunWrapper
