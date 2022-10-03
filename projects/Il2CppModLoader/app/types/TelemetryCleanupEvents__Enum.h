#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TelemetryCleanupEvents__Enum {
        namespace {
            app::TelemetryCleanupEvents__Enum__Class* type_info_ref = nullptr;
        }
        app::TelemetryCleanupEvents__Enum__Class** type_info = &type_info_ref;
        inline app::TelemetryCleanupEvents__Enum__Class* get_class() {
            return il2cpp::get_class<app::TelemetryCleanupEvents__Enum__Class>(type_info, "", "TelemetryCleanupEvents");
        }
        inline app::TelemetryCleanupEvents__Enum* create() {
            return il2cpp::create_object<app::TelemetryCleanupEvents__Enum>(get_class());
        }
    } // namespace TelemetryCleanupEvents__Enum
} // namespace app::classes::types
