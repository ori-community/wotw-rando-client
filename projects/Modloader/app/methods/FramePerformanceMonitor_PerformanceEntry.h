#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FramePerformanceMonitor_PerformanceEntry.h>
#include <Modloader/app/structs/StreamWriter.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::FramePerformanceMonitor_PerformanceEntry {
    IL2CPP_REGISTER_METHOD(0x016421F0, void, ctor, app::FramePerformanceMonitor_PerformanceEntry* this_ptr, app::String* label)
    IL2CPP_REGISTER_METHOD(
        0x01642390,
        void,
        Write,
        app::FramePerformanceMonitor_PerformanceEntry* this_ptr,
        app::StreamWriter* writer,
        int32_t depth,
        float total_duration
    )
} // namespace app::classes::FramePerformanceMonitor_PerformanceEntry
