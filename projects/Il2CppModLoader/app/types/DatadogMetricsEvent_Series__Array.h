#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DatadogMetricsEvent_Series__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DatadogMetricsEvent_Series__Array__Class** type_info;
        inline app::DatadogMetricsEvent_Series__Array__Class* get_class() {
            return il2cpp::get_class<app::DatadogMetricsEvent_Series__Array__Class>(type_info, "", "DatadogMetricsEvent+Series[]");
        }
        inline app::DatadogMetricsEvent_Series__Array* create() {
            return il2cpp::create_object<app::DatadogMetricsEvent_Series__Array>(get_class());
        }
    } // namespace DatadogMetricsEvent_Series__Array
} // namespace app::classes::types
