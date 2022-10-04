#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITelemetryProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITelemetryProvider__Class** type_info;
        inline app::ITelemetryProvider__Class* get_class() {
            return il2cpp::get_class<app::ITelemetryProvider__Class>(type_info, "SystemIntegration.Synchronizer", "ITelemetryProvider");
        }
        inline app::ITelemetryProvider* create() {
            return il2cpp::create_object<app::ITelemetryProvider>(get_class());
        }
    } // namespace ITelemetryProvider
} // namespace app::classes::types
