#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TraceLoggingMetadataCollector {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TraceLoggingMetadataCollector__Class** type_info;
        inline app::TraceLoggingMetadataCollector__Class* get_class() {
            return il2cpp::get_class<app::TraceLoggingMetadataCollector__Class>(type_info, "System.Diagnostics.Tracing", "TraceLoggingMetadataCollector");
        }
        inline app::TraceLoggingMetadataCollector* create() {
            return il2cpp::create_object<app::TraceLoggingMetadataCollector>(get_class());
        }
    } // namespace TraceLoggingMetadataCollector
} // namespace app::classes::types
