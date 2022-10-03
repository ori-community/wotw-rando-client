#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TelemetryIngestionConfigResponse {
        namespace {
            app::TelemetryIngestionConfigResponse__Class* type_info_ref = nullptr;
        }
        app::TelemetryIngestionConfigResponse__Class** type_info = &type_info_ref;
        inline app::TelemetryIngestionConfigResponse__Class* get_class() {
            return il2cpp::get_class<app::TelemetryIngestionConfigResponse__Class>(type_info, "PlayFab.EventsModels", "TelemetryIngestionConfigResponse");
        }
        inline app::TelemetryIngestionConfigResponse* create() {
            return il2cpp::create_object<app::TelemetryIngestionConfigResponse>(get_class());
        }
    } // namespace TelemetryIngestionConfigResponse
} // namespace app::classes::types
