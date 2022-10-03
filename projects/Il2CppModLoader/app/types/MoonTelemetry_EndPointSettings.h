#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetry_EndPointSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetry_EndPointSettings__Class** type_info;
        inline app::MoonTelemetry_EndPointSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTelemetry_EndPointSettings__Class>(type_info, "", "MoonTelemetry", "EndPointSettings");
        }
        inline app::MoonTelemetry_EndPointSettings* create() {
            return il2cpp::create_object<app::MoonTelemetry_EndPointSettings>(get_class());
        }
    } // namespace MoonTelemetry_EndPointSettings
} // namespace app::classes::types
