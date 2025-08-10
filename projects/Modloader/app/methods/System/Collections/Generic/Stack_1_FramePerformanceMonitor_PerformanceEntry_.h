#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FramePerformanceMonitor_PerformanceEntry.h>
#include <Modloader/app/structs/Stack_1_FramePerformanceMonitor_PerformanceEntry_.h>

namespace app::classes::System::Collections::Generic::Stack_1_FramePerformanceMonitor_PerformanceEntry_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::Stack_1_FramePerformanceMonitor_PerformanceEntry_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02CF7F30, app::FramePerformanceMonitor_PerformanceEntry*, Peek, app::Stack_1_FramePerformanceMonitor_PerformanceEntry_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02CF8030,
        void,
        Push,
        app::Stack_1_FramePerformanceMonitor_PerformanceEntry_* this_ptr,
        app::FramePerformanceMonitor_PerformanceEntry* item
    )
    IL2CPP_REGISTER_METHOD(0x02CF7F90, app::FramePerformanceMonitor_PerformanceEntry*, Pop, app::Stack_1_FramePerformanceMonitor_PerformanceEntry_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor, app::Stack_1_FramePerformanceMonitor_PerformanceEntry_* this_ptr)
} // namespace app::classes::System::Collections::Generic::Stack_1_FramePerformanceMonitor_PerformanceEntry_
