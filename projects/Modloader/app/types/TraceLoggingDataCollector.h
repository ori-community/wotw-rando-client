#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TraceLoggingDataCollector {
        inline app::TraceLoggingDataCollector__Class** type_info = (app::TraceLoggingDataCollector__Class**)(modloader::win::memory::resolve_rva(0x0471A380));
        inline app::TraceLoggingDataCollector__Class* get_class() {
            return il2cpp::get_class<app::TraceLoggingDataCollector__Class>(type_info, "System.Diagnostics.Tracing", "TraceLoggingDataCollector");
        }
        inline app::TraceLoggingDataCollector* create() {
            return il2cpp::create_object<app::TraceLoggingDataCollector>(get_class());
        }
    } // namespace TraceLoggingDataCollector
} // namespace app::classes::types
