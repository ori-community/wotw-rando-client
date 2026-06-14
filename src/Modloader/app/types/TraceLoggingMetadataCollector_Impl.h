#pragma once
#include <Modloader/app/structs/TraceLoggingMetadataCollector_Impl.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector_Impl__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TraceLoggingMetadataCollector_Impl {
        inline app::TraceLoggingMetadataCollector_Impl__Class** type_info() {
            static app::TraceLoggingMetadataCollector_Impl__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TraceLoggingMetadataCollector_Impl__Class**)(modloader::win::memory::resolve_rva(0x0478D050));
            }
            return cache;
        }
        inline app::TraceLoggingMetadataCollector_Impl__Class* get_class() {
            return il2cpp::get_nested_class<app::TraceLoggingMetadataCollector_Impl__Class>(type_info(), "System.Diagnostics.Tracing", "TraceLoggingMetadataCollector", "Impl");
        }
        inline app::TraceLoggingMetadataCollector_Impl* create() {
            return il2cpp::create_object<app::TraceLoggingMetadataCollector_Impl>(get_class());
        }
    } // namespace TraceLoggingMetadataCollector_Impl
} // namespace app::classes::types
