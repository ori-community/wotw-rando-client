#pragma once
#include <Modloader/app/structs/PerformanceDataCollector.h>
#include <Modloader/app/structs/PerformanceDataCollector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PerformanceDataCollector {
        inline app::PerformanceDataCollector__Class** type_info() {
            static app::PerformanceDataCollector__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PerformanceDataCollector__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PerformanceDataCollector__Class* get_class() {
            return il2cpp::get_class<app::PerformanceDataCollector__Class>(type_info(), "", "PerformanceDataCollector");
        }
        inline app::PerformanceDataCollector* create() {
            return il2cpp::create_object<app::PerformanceDataCollector>(get_class());
        }
    } // namespace PerformanceDataCollector
} // namespace app::classes::types
