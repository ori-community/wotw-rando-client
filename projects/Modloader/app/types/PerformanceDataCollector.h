#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PerformanceDataCollector__Class.h>
#include <Modloader/app/structs/PerformanceDataCollector.h>

namespace app::classes::types {
    namespace PerformanceDataCollector {
        namespace {
            inline app::PerformanceDataCollector__Class* type_info_ref = nullptr;
        }
        inline app::PerformanceDataCollector__Class** type_info = &type_info_ref;
        inline app::PerformanceDataCollector__Class* get_class() {
            return il2cpp::get_class<app::PerformanceDataCollector__Class>(type_info, "", "PerformanceDataCollector");
        }
        inline app::PerformanceDataCollector* create() {
            return il2cpp::create_object<app::PerformanceDataCollector>(get_class());
        }
    } // namespace PerformanceDataCollector
} // namespace app::classes::types
