#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryKustoWebConfig {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetryKustoWebConfig__Class** type_info;
        inline app::MoonTelemetryKustoWebConfig__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryKustoWebConfig__Class>(type_info, "", "MoonTelemetryKustoWebConfig");
        }
        inline app::MoonTelemetryKustoWebConfig* create() {
            return il2cpp::create_object<app::MoonTelemetryKustoWebConfig>(get_class());
        }
    } // namespace MoonTelemetryKustoWebConfig
} // namespace app::classes::types
