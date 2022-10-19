#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ITelemetryProvider {
        inline app::ITelemetryProvider__Class** type_info = (app::ITelemetryProvider__Class**)(modloader::win::memory::resolve_rva(0x047982A0));
        inline app::ITelemetryProvider__Class* get_class() {
            return il2cpp::get_class<app::ITelemetryProvider__Class>(type_info, "SystemIntegration.Synchronizer", "ITelemetryProvider");
        }
    } // namespace ITelemetryProvider
} // namespace app::classes::types
