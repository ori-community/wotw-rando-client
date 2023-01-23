#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Stack_1_FramePerformanceMonitor_PerformanceEntry_.h>
#include <Modloader/app/structs/FramePerformanceMonitor_PerformanceEntry.h>

namespace app::classes::System::Collections::Generic::Stack_1_FramePerformanceMonitor_PerformanceEntry_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::Stack_1_FramePerformanceMonitor_PerformanceEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04791028, Stack_1_FramePerformanceMonitor_PerformanceEntry__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CF7F30, app::FramePerformanceMonitor_PerformanceEntry*, Peek, (app::Stack_1_FramePerformanceMonitor_PerformanceEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04764E48, Stack_1_FramePerformanceMonitor_PerformanceEntry__Peek__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CF8030, void, Push, (app::Stack_1_FramePerformanceMonitor_PerformanceEntry_ * this_ptr, app::FramePerformanceMonitor_PerformanceEntry* item))
    IL2CPP_REGISTER_METHODINFO(0x0478A6D8, Stack_1_FramePerformanceMonitor_PerformanceEntry__Push__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02CF7F90, app::FramePerformanceMonitor_PerformanceEntry*, Pop, (app::Stack_1_FramePerformanceMonitor_PerformanceEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04757F48, Stack_1_FramePerformanceMonitor_PerformanceEntry__Pop__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor, (app::Stack_1_FramePerformanceMonitor_PerformanceEntry_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047756D8, Stack_1_FramePerformanceMonitor_PerformanceEntry___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Stack_1_FramePerformanceMonitor_PerformanceEntry_
