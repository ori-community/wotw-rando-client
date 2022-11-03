#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DatadogMetricsEvent_Series__Array {
        inline app::DatadogMetricsEvent_Series__Array__Class** type_info = (app::DatadogMetricsEvent_Series__Array__Class**)(modloader::win::memory::resolve_rva(0x0476AC28));
        inline app::DatadogMetricsEvent_Series__Array__Class* get_class() {
            return il2cpp::get_class<app::DatadogMetricsEvent_Series__Array__Class>(type_info, "", "DatadogMetricsEvent+Series[]");
        }
        inline app::DatadogMetricsEvent_Series__Array* create() {
            return il2cpp::create_object<app::DatadogMetricsEvent_Series__Array>(get_class());
        }
    } // namespace DatadogMetricsEvent_Series__Array
} // namespace app::classes::types
