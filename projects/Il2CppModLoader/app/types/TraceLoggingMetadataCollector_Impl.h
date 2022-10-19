#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TraceLoggingMetadataCollector_Impl {
        inline app::TraceLoggingMetadataCollector_Impl__Class** type_info = (app::TraceLoggingMetadataCollector_Impl__Class**)(modloader::win::memory::resolve_rva(0x0478D050));
        inline app::TraceLoggingMetadataCollector_Impl__Class* get_class() {
            return il2cpp::get_nested_class<app::TraceLoggingMetadataCollector_Impl__Class>(type_info, "System.Diagnostics.Tracing", "TraceLoggingMetadataCollector", "Impl");
        }
        inline app::TraceLoggingMetadataCollector_Impl* create() {
            return il2cpp::create_object<app::TraceLoggingMetadataCollector_Impl>(get_class());
        }
    } // namespace TraceLoggingMetadataCollector_Impl
} // namespace app::classes::types
