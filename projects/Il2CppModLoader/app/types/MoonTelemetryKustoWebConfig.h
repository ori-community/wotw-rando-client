#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetryKustoWebConfig {
        inline app::MoonTelemetryKustoWebConfig__Class** type_info = (app::MoonTelemetryKustoWebConfig__Class**)(modloader::win::memory::resolve_rva(0x0473E478));
        inline app::MoonTelemetryKustoWebConfig__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryKustoWebConfig__Class>(type_info, "", "MoonTelemetryKustoWebConfig");
        }
        inline app::MoonTelemetryKustoWebConfig* create() {
            return il2cpp::create_object<app::MoonTelemetryKustoWebConfig>(get_class());
        }
    } // namespace MoonTelemetryKustoWebConfig
} // namespace app::classes::types
