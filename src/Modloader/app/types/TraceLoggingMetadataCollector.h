#pragma once
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TraceLoggingMetadataCollector {
        inline app::TraceLoggingMetadataCollector__Class** type_info() {
            static app::TraceLoggingMetadataCollector__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TraceLoggingMetadataCollector__Class**)(modloader::win::memory::resolve_rva(0x047463B8));
            }
            return cache;
        }
        inline app::TraceLoggingMetadataCollector__Class* get_class() {
            return il2cpp::get_class<app::TraceLoggingMetadataCollector__Class>(type_info(), "System.Diagnostics.Tracing", "TraceLoggingMetadataCollector");
        }
        inline app::TraceLoggingMetadataCollector* create() {
            return il2cpp::create_object<app::TraceLoggingMetadataCollector>(get_class());
        }
    } // namespace TraceLoggingMetadataCollector
} // namespace app::classes::types
