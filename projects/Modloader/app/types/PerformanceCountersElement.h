#pragma once
#include <Modloader/app/structs/PerformanceCountersElement.h>
#include <Modloader/app/structs/PerformanceCountersElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PerformanceCountersElement {
        inline app::PerformanceCountersElement__Class** type_info() {
            static app::PerformanceCountersElement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PerformanceCountersElement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PerformanceCountersElement__Class* get_class() {
            return il2cpp::get_class<app::PerformanceCountersElement__Class>(type_info(), "System.Net.Configuration", "PerformanceCountersElement");
        }
        inline app::PerformanceCountersElement* create() {
            return il2cpp::create_object<app::PerformanceCountersElement>(get_class());
        }
    } // namespace PerformanceCountersElement
} // namespace app::classes::types
