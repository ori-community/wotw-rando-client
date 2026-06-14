#pragma once
#include <Modloader/app/structs/MoonTelemetryKustoWebConfig.h>
#include <Modloader/app/structs/MoonTelemetryKustoWebConfig__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryKustoWebConfig {
        inline app::MoonTelemetryKustoWebConfig__Class** type_info() {
            static app::MoonTelemetryKustoWebConfig__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTelemetryKustoWebConfig__Class**)(modloader::win::memory::resolve_rva(0x0473E478));
            }
            return cache;
        }
        inline app::MoonTelemetryKustoWebConfig__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryKustoWebConfig__Class>(type_info(), "", "MoonTelemetryKustoWebConfig");
        }
        inline app::MoonTelemetryKustoWebConfig* create() {
            return il2cpp::create_object<app::MoonTelemetryKustoWebConfig>(get_class());
        }
    } // namespace MoonTelemetryKustoWebConfig
} // namespace app::classes::types
