#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparer_1_FramePerformanceMonitor_PerformanceFrameData_.h>
#include <Modloader/app/structs/Comparison_1_FramePerformanceMonitor_PerformanceFrameData_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_FramePerformanceMonitor_PerformanceFrameData_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_FramePerformanceMonitor_PerformanceFrameData_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x02C9B740, app::Comparer_1_FramePerformanceMonitor_PerformanceFrameData_*, Create, (app::Comparison_1_FramePerformanceMonitor_PerformanceFrameData_ * comparison))
    IL2CPP_REGISTER_METHOD(0x02C9B940, app::Comparer_1_FramePerformanceMonitor_PerformanceFrameData_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x02808F10, int32_t, IComparer_Compare, (app::Comparer_1_FramePerformanceMonitor_PerformanceFrameData_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_FramePerformanceMonitor_PerformanceFrameData_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Comparer_1_FramePerformanceMonitor_PerformanceFrameData_
