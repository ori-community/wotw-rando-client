#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayFabTelemetryProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayFabTelemetryProvider__Class** type_info;
        inline app::PlayFabTelemetryProvider__Class* get_class() {
            return il2cpp::get_class<app::PlayFabTelemetryProvider__Class>(type_info, "SystemIntegration.Synchronizer.Telemetry", "PlayFabTelemetryProvider");
        }
        inline app::PlayFabTelemetryProvider* create() {
            return il2cpp::create_object<app::PlayFabTelemetryProvider>(get_class());
        }
    } // namespace PlayFabTelemetryProvider
} // namespace app::classes::types
