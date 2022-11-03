#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TelemetryIngestionConfigResponse {
        namespace {
            inline app::TelemetryIngestionConfigResponse__Class* type_info_ref = nullptr;
        }
        inline app::TelemetryIngestionConfigResponse__Class** type_info = &type_info_ref;
        inline app::TelemetryIngestionConfigResponse__Class* get_class() {
            return il2cpp::get_class<app::TelemetryIngestionConfigResponse__Class>(type_info, "PlayFab.EventsModels", "TelemetryIngestionConfigResponse");
        }
        inline app::TelemetryIngestionConfigResponse* create() {
            return il2cpp::create_object<app::TelemetryIngestionConfigResponse>(get_class());
        }
    } // namespace TelemetryIngestionConfigResponse
} // namespace app::classes::types
