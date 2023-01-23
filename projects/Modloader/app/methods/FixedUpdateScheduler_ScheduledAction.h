#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FixedUpdateScheduler_ScheduledAction.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/ISuspendable.h>

namespace app::classes::FixedUpdateScheduler_ScheduledAction {
    IL2CPP_REGISTER_METHOD(0x0126FF10, void, ctor, (app::FixedUpdateScheduler_ScheduledAction * this_ptr, app::Action* action, app::ISuspendable* suspendable, float remaining_time))
    IL2CPP_REGISTER_METHOD(0x00A18B80, void, Invoke, (app::FixedUpdateScheduler_ScheduledAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126FF20, void, Advance, (app::FixedUpdateScheduler_ScheduledAction * this_ptr))
} // namespace app::classes::FixedUpdateScheduler_ScheduledAction
