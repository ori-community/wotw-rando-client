#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TraceLoggingDataCollector {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TraceLoggingDataCollector__Class** type_info;
        inline app::TraceLoggingDataCollector__Class* get_class() {
            return il2cpp::get_class<app::TraceLoggingDataCollector__Class>(type_info, "System.Diagnostics.Tracing", "TraceLoggingDataCollector");
        }
        inline app::TraceLoggingDataCollector* create() {
            return il2cpp::create_object<app::TraceLoggingDataCollector>(get_class());
        }
    } // namespace TraceLoggingDataCollector
} // namespace app::classes::types
