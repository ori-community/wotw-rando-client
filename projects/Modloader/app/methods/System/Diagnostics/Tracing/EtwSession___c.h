#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EtwSession_c.h>
#include <Modloader/app/structs/WeakReference_1_System_Diagnostics_Tracing_EtwSession_.h>

namespace app::classes::System::Diagnostics::Tracing::EtwSession___c {
    IL2CPP_REGISTER_METHOD(0x0174A5D0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::EtwSession_c* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0174A710,
        bool,
        _TrimGlobalList_b__2_0,
        app::EtwSession_c* this_ptr,
        app::WeakReference_1_System_Diagnostics_Tracing_EtwSession_* wr_etw_session
    )
} // namespace app::classes::System::Diagnostics::Tracing::EtwSession___c
