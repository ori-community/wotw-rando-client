#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FramePerformanceMonitor_PerformanceEntry.h>
#include <Modloader/app/structs/List_1_T_Enumerator_FramePerformanceMonitor_PerformanceEntry___Boxed.h>

namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_FramePerformanceMonitor_PerformanceEntry_ {
    IL2CPP_REGISTER_METHOD(
        0x00107C20,
        app::FramePerformanceMonitor_PerformanceEntry*,
        get_Current,
        app::List_1_T_Enumerator_FramePerformanceMonitor_PerformanceEntry___Boxed* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x0014EA20, bool, MoveNext, app::List_1_T_Enumerator_FramePerformanceMonitor_PerformanceEntry___Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00002890, void, Dispose, app::List_1_T_Enumerator_FramePerformanceMonitor_PerformanceEntry___Boxed* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_T__Enumerator_FramePerformanceMonitor_PerformanceEntry_
