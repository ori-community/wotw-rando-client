#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PerformingAction.h>

namespace app::classes::PerformingAction {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlocking, (app::PerformingAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::PerformingAction * this_ptr))
} // namespace app::classes::PerformingAction
