#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ObjectComparer_1_FramePerformanceMonitor_PerformanceFrameData_.h>
#include <Modloader/app/structs/FramePerformanceMonitor_PerformanceFrameData.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::ObjectComparer_1_FramePerformanceMonitor_PerformanceFrameData_ {
    IL2CPP_REGISTER_METHOD(0x02C2AA00, int32_t, Compare, (app::ObjectComparer_1_FramePerformanceMonitor_PerformanceFrameData_ * this_ptr, app::FramePerformanceMonitor_PerformanceFrameData x, app::FramePerformanceMonitor_PerformanceFrameData y))
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals, (app::ObjectComparer_1_FramePerformanceMonitor_PerformanceFrameData_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode, (app::ObjectComparer_1_FramePerformanceMonitor_PerformanceFrameData_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, (app::ObjectComparer_1_FramePerformanceMonitor_PerformanceFrameData_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::ObjectComparer_1_FramePerformanceMonitor_PerformanceFrameData_
