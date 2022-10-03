#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TelemetryEvent__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TelemetryEvent__Enum__Class** type_info;
        inline app::TelemetryEvent__Enum__Class* get_class() {
            return il2cpp::get_class<app::TelemetryEvent__Enum__Class>(type_info, "", "TelemetryEvent");
        }
        inline app::TelemetryEvent__Enum* create() {
            return il2cpp::create_object<app::TelemetryEvent__Enum>(get_class());
        }
    } // namespace TelemetryEvent__Enum
} // namespace app::classes::types
