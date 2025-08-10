#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparer_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_.h>
#include <Modloader/app/structs/Comparison_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_*, get_Default, )
    IL2CPP_REGISTER_METHOD(
        0x028BE5B0,
        app::Comparer_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_*,
        Create,
        app::Comparison_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_* comparison
    )
    IL2CPP_REGISTER_METHOD(0x028BE7B0, app::Comparer_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_*, CreateComparer, )
    IL2CPP_REGISTER_METHOD(
        0x02813410,
        int32_t,
        IComparer_Compare,
        app::Comparer_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_* this_ptr,
        app::Object* x,
        app::Object* y
    )
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::Comparer_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Comparer_1_System_Diagnostics_Tracing_EventProvider_SessionInfo_
