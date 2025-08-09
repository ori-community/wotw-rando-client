#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Comparison_1_FramePerformanceMonitor_PerformanceFrameData_.h>
#include <Modloader/app/structs/FramePerformanceMonitor_PerformanceFrameData.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Comparison_1_FramePerformanceMonitor_PerformanceFrameData_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::Comparison_1_FramePerformanceMonitor_PerformanceFrameData_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x02B847C0,
        int32_t,
        Invoke,
        app::Comparison_1_FramePerformanceMonitor_PerformanceFrameData_* this_ptr,
        app::FramePerformanceMonitor_PerformanceFrameData x,
        app::FramePerformanceMonitor_PerformanceFrameData y
    )
    IL2CPP_REGISTER_METHOD(
        0x02B886B0,
        app::IAsyncResult*,
        BeginInvoke,
        app::Comparison_1_FramePerformanceMonitor_PerformanceFrameData_* this_ptr,
        app::FramePerformanceMonitor_PerformanceFrameData x,
        app::FramePerformanceMonitor_PerformanceFrameData y,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00F550D0, int32_t, EndInvoke, app::Comparison_1_FramePerformanceMonitor_PerformanceFrameData_* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::System::Comparison_1_FramePerformanceMonitor_PerformanceFrameData_
