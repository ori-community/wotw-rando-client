#pragma once
#include <Modloader/app/structs/PlayFabTelemetryProvider.h>
#include <Modloader/app/structs/PlayFabTelemetryProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabTelemetryProvider {
        inline app::PlayFabTelemetryProvider__Class** type_info() {
            static app::PlayFabTelemetryProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabTelemetryProvider__Class**)(modloader::win::memory::resolve_rva(0x04752C48));
            }
            return cache;
        }
        inline app::PlayFabTelemetryProvider__Class* get_class() {
            return il2cpp::get_class<app::PlayFabTelemetryProvider__Class>(type_info(), "SystemIntegration.Synchronizer.Telemetry", "PlayFabTelemetryProvider");
        }
        inline app::PlayFabTelemetryProvider* create() {
            return il2cpp::create_object<app::PlayFabTelemetryProvider>(get_class());
        }
    } // namespace PlayFabTelemetryProvider
} // namespace app::classes::types
