#pragma once
#include <Modloader/app/structs/TelemetryIngestionConfigResponse.h>
#include <Modloader/app/structs/TelemetryIngestionConfigResponse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TelemetryIngestionConfigResponse {
        inline app::TelemetryIngestionConfigResponse__Class** type_info() {
            static app::TelemetryIngestionConfigResponse__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TelemetryIngestionConfigResponse__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TelemetryIngestionConfigResponse__Class* get_class() {
            return il2cpp::get_class<app::TelemetryIngestionConfigResponse__Class>(type_info(), "PlayFab.EventsModels", "TelemetryIngestionConfigResponse");
        }
        inline app::TelemetryIngestionConfigResponse* create() {
            return il2cpp::create_object<app::TelemetryIngestionConfigResponse>(get_class());
        }
    } // namespace TelemetryIngestionConfigResponse
} // namespace app::classes::types
