#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_FramePerformanceMonitor_PerformanceEntry_.h>
#include <Modloader/app/structs/FramePerformanceMonitor_PerformanceEntry.h>
#include <Modloader/app/structs/Comparison_1_FramePerformanceMonitor_PerformanceEntry_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_FramePerformanceMonitor_PerformanceEntry_.h>
#include <Modloader/app/structs/IEnumerable_1_FramePerformanceMonitor_PerformanceEntry_.h>

namespace app::classes::System::Collections::Generic::List_1_FramePerformanceMonitor_PerformanceEntry_ {
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_FramePerformanceMonitor_PerformanceEntry_ * this_ptr, app::FramePerformanceMonitor_PerformanceEntry* item))
    IL2CPP_REGISTER_METHODINFO(0x0472B138, List_1_FramePerformanceMonitor_PerformanceEntry__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_FramePerformanceMonitor_PerformanceEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04799A98, List_1_FramePerformanceMonitor_PerformanceEntry__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor_1, (app::List_1_FramePerformanceMonitor_PerformanceEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04761A20, List_1_FramePerformanceMonitor_PerformanceEntry___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EAEA0, void, Sort, (app::List_1_FramePerformanceMonitor_PerformanceEntry_ * this_ptr, app::Comparison_1_FramePerformanceMonitor_PerformanceEntry_* comparison))
    IL2CPP_REGISTER_METHODINFO(0x0474B530, List_1_FramePerformanceMonitor_PerformanceEntry__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_FramePerformanceMonitor_PerformanceEntry_, GetEnumerator, (app::List_1_FramePerformanceMonitor_PerformanceEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04727150, List_1_FramePerformanceMonitor_PerformanceEntry__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FE8360, void, ctor_2, (app::List_1_FramePerformanceMonitor_PerformanceEntry_ * this_ptr, app::IEnumerable_1_FramePerformanceMonitor_PerformanceEntry_* collection))
    IL2CPP_REGISTER_METHODINFO(0x0472D618, List_1_FramePerformanceMonitor_PerformanceEntry___ctor_1__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_FramePerformanceMonitor_PerformanceEntry_
