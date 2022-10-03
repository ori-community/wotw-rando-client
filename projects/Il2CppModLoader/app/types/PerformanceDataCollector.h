#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PerformanceDataCollector {
        namespace {
            app::PerformanceDataCollector__Class* type_info_ref = nullptr;
        }
        app::PerformanceDataCollector__Class** type_info = &type_info_ref;
        inline app::PerformanceDataCollector__Class* get_class() {
            return il2cpp::get_class<app::PerformanceDataCollector__Class>(type_info, "", "PerformanceDataCollector");
        }
        inline app::PerformanceDataCollector* create() {
            return il2cpp::create_object<app::PerformanceDataCollector>(get_class());
        }
    } // namespace PerformanceDataCollector
} // namespace app::classes::types
