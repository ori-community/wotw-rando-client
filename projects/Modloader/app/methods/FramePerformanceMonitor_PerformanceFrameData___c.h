#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FramePerformanceMonitor_PerformanceEntry.h>
#include <Modloader/app/structs/FramePerformanceMonitor_PerformanceFrameData_c.h>

namespace app::classes::FramePerformanceMonitor_PerformanceFrameData___c {
    IL2CPP_REGISTER_METHOD(0x01643300, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::FramePerformanceMonitor_PerformanceFrameData_c* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01642B10,
        int32_t,
        __ctor_b__0_0,
        app::FramePerformanceMonitor_PerformanceFrameData_c* this_ptr,
        app::FramePerformanceMonitor_PerformanceEntry* a,
        app::FramePerformanceMonitor_PerformanceEntry* b
    )
} // namespace app::classes::FramePerformanceMonitor_PerformanceFrameData___c
