#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TraceLoggingMetadataCollector_Impl {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TraceLoggingMetadataCollector_Impl__Class** type_info;
        inline app::TraceLoggingMetadataCollector_Impl__Class* get_class() {
            return il2cpp::get_nested_class<app::TraceLoggingMetadataCollector_Impl__Class>(type_info, "System.Diagnostics.Tracing", "TraceLoggingMetadataCollector", "Impl");
        }
        inline app::TraceLoggingMetadataCollector_Impl* create() {
            return il2cpp::create_object<app::TraceLoggingMetadataCollector_Impl>(get_class());
        }
    } // namespace TraceLoggingMetadataCollector_Impl
} // namespace app::classes::types
