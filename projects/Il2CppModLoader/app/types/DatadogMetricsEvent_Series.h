#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DatadogMetricsEvent_Series {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DatadogMetricsEvent_Series__Class** type_info;
        inline app::DatadogMetricsEvent_Series__Class* get_class() {
            return il2cpp::get_nested_class<app::DatadogMetricsEvent_Series__Class>(type_info, "", "DatadogMetricsEvent", "Series");
        }
        inline app::DatadogMetricsEvent_Series* create() {
            return il2cpp::create_object<app::DatadogMetricsEvent_Series>(get_class());
        }
        inline app::DatadogMetricsEvent_Series__Array* create_array(int size) {
            return il2cpp::array_new<app::DatadogMetricsEvent_Series__Array>(get_class(), size);
        }
        inline app::DatadogMetricsEvent_Series__Array* create_array(const std::vector<app::DatadogMetricsEvent_Series*>& items) {
            return il2cpp::array_new<app::DatadogMetricsEvent_Series__Array>(get_class(), items);
        }
    } // namespace DatadogMetricsEvent_Series
} // namespace app::classes::types
