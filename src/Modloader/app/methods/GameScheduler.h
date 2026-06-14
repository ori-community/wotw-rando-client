#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameScheduler.h>

namespace app::classes::GameScheduler {
    IL2CPP_REGISTER_METHOD(0x003F9340, void, DebugPrintDelegates, app::GameScheduler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FA220, void, ctor, app::GameScheduler* this_ptr)
} // namespace app::classes::GameScheduler
