#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DatadogMetricsEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DatadogMetricsEvent__Class** type_info;
        inline app::DatadogMetricsEvent__Class* get_class() {
            return il2cpp::get_class<app::DatadogMetricsEvent__Class>(type_info, "", "DatadogMetricsEvent");
        }
        inline app::DatadogMetricsEvent* create() {
            return il2cpp::create_object<app::DatadogMetricsEvent>(get_class());
        }
    } // namespace DatadogMetricsEvent
} // namespace app::classes::types
