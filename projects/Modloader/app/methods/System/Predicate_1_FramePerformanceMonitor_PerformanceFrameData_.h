#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Predicate_1_FramePerformanceMonitor_PerformanceFrameData_.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/FramePerformanceMonitor_PerformanceFrameData.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Predicate_1_FramePerformanceMonitor_PerformanceFrameData_ {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::Predicate_1_FramePerformanceMonitor_PerformanceFrameData_ * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02882470, bool, Invoke, (app::Predicate_1_FramePerformanceMonitor_PerformanceFrameData_ * this_ptr, app::FramePerformanceMonitor_PerformanceFrameData obj))
    IL2CPP_REGISTER_METHOD(0x0288EBE0, app::IAsyncResult*, BeginInvoke, (app::Predicate_1_FramePerformanceMonitor_PerformanceFrameData_ * this_ptr, app::FramePerformanceMonitor_PerformanceFrameData obj, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::Predicate_1_FramePerformanceMonitor_PerformanceFrameData_ * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::System::Predicate_1_FramePerformanceMonitor_PerformanceFrameData_
