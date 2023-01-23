#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EtwSession_c_DisplayClass1_0.h>
#include <Modloader/app/structs/WeakReference_1_System_Diagnostics_Tracing_EtwSession_.h>

namespace app::classes::System::Diagnostics::Tracing::EtwSession___c__DisplayClass1_0 {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EtwSession_c_DisplayClass1_0 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0174A860, bool, _RemoveEtwSession_b__0, (app::EtwSession_c_DisplayClass1_0 * this_ptr, app::WeakReference_1_System_Diagnostics_Tracing_EtwSession_* wr_etw_session))
    IL2CPP_REGISTER_METHODINFO(0x04769248, EtwSession_c_DisplayClass1_0__RemoveEtwSession_b__0__MethodInfo)
} // namespace app::classes::System::Diagnostics::Tracing::EtwSession___c__DisplayClass1_0
