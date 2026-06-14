#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_FramePerformanceMonitor_PerformanceFrameData_.h>
#include <Modloader/app/structs/Comparison_1_FramePerformanceMonitor_PerformanceFrameData_.h>
#include <Modloader/app/structs/FramePerformanceMonitor_PerformanceFrameData.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_FramePerformanceMonitor_PerformanceFrameData_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_FramePerformanceMonitor_PerformanceFrameData_* this_ptr,
        app::Comparison_1_FramePerformanceMonitor_PerformanceFrameData_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A0E0,
        int32_t,
        Compare,
        app::ComparisonComparer_1_FramePerformanceMonitor_PerformanceFrameData_* this_ptr,
        app::FramePerformanceMonitor_PerformanceFrameData x,
        app::FramePerformanceMonitor_PerformanceFrameData y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_FramePerformanceMonitor_PerformanceFrameData_
