#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FramePerformanceMonitor_PerformanceFrameData__Boxed.h>
#include <Modloader/app/structs/FramePerformanceMonitor_PerformanceEntry.h>
#include <Modloader/app/structs/StreamWriter.h>

namespace app::classes::FramePerformanceMonitor_PerformanceFrameData {
    IL2CPP_REGISTER_METHOD(0x00139B80, void, ctor, (app::FramePerformanceMonitor_PerformanceFrameData__Boxed * this_ptr, app::FramePerformanceMonitor_PerformanceEntry* root, bool garbage_collection, float last_garbage_collection_time))
    IL2CPP_REGISTER_METHOD(0x00139B90, void, Write, (app::FramePerformanceMonitor_PerformanceFrameData__Boxed * this_ptr, app::StreamWriter* writer))
} // namespace app::classes::FramePerformanceMonitor_PerformanceFrameData
