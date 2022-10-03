#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TelemetryIngestionConfigRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TelemetryIngestionConfigRequest__Class** type_info;
        inline app::TelemetryIngestionConfigRequest__Class* get_class() {
            return il2cpp::get_class<app::TelemetryIngestionConfigRequest__Class>(type_info, "PlayFab.EventsModels", "TelemetryIngestionConfigRequest");
        }
        inline app::TelemetryIngestionConfigRequest* create() {
            return il2cpp::create_object<app::TelemetryIngestionConfigRequest>(get_class());
        }
    } // namespace TelemetryIngestionConfigRequest
} // namespace app::classes::types
