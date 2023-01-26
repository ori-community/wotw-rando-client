#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WeakReference_1_System_Diagnostics_Tracing_EtwSession_.h>
#include <Modloader/app/structs/EtwSession.h>

namespace app::classes::System::WeakReference_1_System_Diagnostics_Tracing_EtwSession_ {
    IL2CPP_REGISTER_METHOD(0x0225A0C0, bool, TryGetTarget, (app::WeakReference_1_System_Diagnostics_Tracing_EtwSession_ * this_ptr, app::EtwSession** target))
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor, (app::WeakReference_1_System_Diagnostics_Tracing_EtwSession_ * this_ptr, app::EtwSession* target))
} // namespace app::classes::System::WeakReference_1_System_Diagnostics_Tracing_EtwSession_
