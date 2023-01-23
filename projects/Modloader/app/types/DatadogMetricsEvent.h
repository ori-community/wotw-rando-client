#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DatadogMetricsEvent__Class.h>
#include <Modloader/app/structs/DatadogMetricsEvent.h>

namespace app::classes::types {
    namespace DatadogMetricsEvent {
        inline app::DatadogMetricsEvent__Class** type_info = (app::DatadogMetricsEvent__Class**)(modloader::win::memory::resolve_rva(0x0476C6B8));
        inline app::DatadogMetricsEvent__Class* get_class() {
            return il2cpp::get_class<app::DatadogMetricsEvent__Class>(type_info, "", "DatadogMetricsEvent");
        }
        inline app::DatadogMetricsEvent* create() {
            return il2cpp::create_object<app::DatadogMetricsEvent>(get_class());
        }
    } // namespace DatadogMetricsEvent
} // namespace app::classes::types
