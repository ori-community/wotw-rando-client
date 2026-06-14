#pragma once
#include <Modloader/app/structs/TelemetryFpsSample__Array.h>
#include <Modloader/app/structs/TelemetryFpsSample__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TelemetryFpsSample__Array {
        inline app::TelemetryFpsSample__Array__Class** type_info() {
            static app::TelemetryFpsSample__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TelemetryFpsSample__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TelemetryFpsSample__Array__Class* get_class() {
            return il2cpp::get_class<app::TelemetryFpsSample__Array__Class>(type_info(), "", "TelemetryFpsSample[]");
        }
        inline app::TelemetryFpsSample__Array* create() {
            return il2cpp::create_object<app::TelemetryFpsSample__Array>(get_class());
        }
    } // namespace TelemetryFpsSample__Array
} // namespace app::classes::types
