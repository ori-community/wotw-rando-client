#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FixedUpdateScheduler.h>
#include <Modloader/app/structs/ISuspendable.h>
#include <Modloader/app/structs/Action.h>

namespace app::classes::FixedUpdateScheduler {
    IL2CPP_REGISTER_METHOD(0x0126F940, void, Awake, (app::FixedUpdateScheduler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126F9D0, void, FixedUpdate, (app::FixedUpdateScheduler * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126FC10, void, ScheduleAction, (app::FixedUpdateScheduler * this_ptr, app::ISuspendable* suspendable, app::Action* action, float time))
    IL2CPP_REGISTER_METHOD(0x0126FDB0, void, ctor, (app::FixedUpdateScheduler * this_ptr))
} // namespace app::classes::FixedUpdateScheduler
