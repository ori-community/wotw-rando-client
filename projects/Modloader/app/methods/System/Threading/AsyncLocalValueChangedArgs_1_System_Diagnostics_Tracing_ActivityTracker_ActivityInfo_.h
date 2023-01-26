#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ActivityTracker_ActivityInfo.h>
#include <Modloader/app/structs/AsyncLocalValueChangedArgs_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo___Boxed.h>

namespace app::classes::System::Threading::AsyncLocalValueChangedArgs_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo_ {
    IL2CPP_REGISTER_METHOD(0x00107C10, app::ActivityTracker_ActivityInfo*, get_CurrentValue, (app::AsyncLocalValueChangedArgs_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo___Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00107C00, app::ActivityTracker_ActivityInfo*, get_PreviousValue, (app::AsyncLocalValueChangedArgs_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo___Boxed * this_ptr))
} // namespace app::classes::System::Threading::AsyncLocalValueChangedArgs_1_System_Diagnostics_Tracing_ActivityTracker_ActivityInfo_
