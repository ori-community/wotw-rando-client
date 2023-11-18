#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ActivityTracker_ActivityInfo.h>
#include <Modloader/app/structs/Action_1_System_Threading_AsyncLocalValueChangedArgs_1__1.h>
#include <Modloader/app/structs/AsyncLocal_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo_.h>

namespace app::classes::System::Threading::AsyncLocal_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo_ {
    IL2CPP_REGISTER_METHOD(0x02775090, app::ActivityTracker_ActivityInfo*, get_Value, (app::AsyncLocal_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027751A0, void, set_Value, (app::AsyncLocal_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo_ * this_ptr, app::ActivityTracker_ActivityInfo* value))
    IL2CPP_REGISTER_METHOD(0x019D6B90, void, ctor, (app::AsyncLocal_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo_ * this_ptr, app::Action_1_System_Threading_AsyncLocalValueChangedArgs_1__1* value_changed_handler))
} // namespace app::classes::System::Threading::AsyncLocal_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo_
