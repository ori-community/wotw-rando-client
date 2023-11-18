#pragma once
#include <Modloader/app/structs/TelemetryCleanupEvents__Enum.h>
#include <Modloader/app/structs/TelemetryCleanupEvents__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TelemetryCleanupEvents__Enum {
        inline app::TelemetryCleanupEvents__Enum__Class** type_info() {
            static app::TelemetryCleanupEvents__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TelemetryCleanupEvents__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TelemetryCleanupEvents__Enum__Class* get_class() {
            return il2cpp::get_class<app::TelemetryCleanupEvents__Enum__Class>(type_info(), "", "TelemetryCleanupEvents");
        }
        inline app::TelemetryCleanupEvents__Enum* create() {
            return il2cpp::create_object<app::TelemetryCleanupEvents__Enum>(get_class());
        }
    } // namespace TelemetryCleanupEvents__Enum
} // namespace app::classes::types
