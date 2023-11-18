#pragma once
#include <Modloader/app/structs/ScarlettPerformanceMode.h>
#include <Modloader/app/structs/ScarlettPerformanceMode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScarlettPerformanceMode {
        inline app::ScarlettPerformanceMode__Class** type_info() {
            static app::ScarlettPerformanceMode__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScarlettPerformanceMode__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScarlettPerformanceMode__Class* get_class() {
            return il2cpp::get_class<app::ScarlettPerformanceMode__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "ScarlettPerformanceMode");
        }
        inline app::ScarlettPerformanceMode* create() {
            return il2cpp::create_object<app::ScarlettPerformanceMode>(get_class());
        }
    } // namespace ScarlettPerformanceMode
} // namespace app::classes::types
