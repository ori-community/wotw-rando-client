#pragma once
#include <Modloader/app/structs/OneDSEventsAPI_GetTelemetryIngestionConfigAsync_d_12.h>
#include <Modloader/app/structs/OneDSEventsAPI_GetTelemetryIngestionConfigAsync_d_12__Boxed.h>
#include <Modloader/app/structs/OneDSEventsAPI_GetTelemetryIngestionConfigAsync_d_12__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OneDSEventsAPI_GetTelemetryIngestionConfigAsync_d_12 {
        inline app::OneDSEventsAPI_GetTelemetryIngestionConfigAsync_d_12__Class** type_info() {
            static app::OneDSEventsAPI_GetTelemetryIngestionConfigAsync_d_12__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OneDSEventsAPI_GetTelemetryIngestionConfigAsync_d_12__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OneDSEventsAPI_GetTelemetryIngestionConfigAsync_d_12__Class* get_class() {
            return il2cpp::get_nested_class<app::OneDSEventsAPI_GetTelemetryIngestionConfigAsync_d_12__Class>(type_info(), "PlayFab", "OneDSEventsAPI", "<GetTelemetryIngestionConfigAsync>d__12");
        }
        inline app::OneDSEventsAPI_GetTelemetryIngestionConfigAsync_d_12* create() {
            return il2cpp::create_object<app::OneDSEventsAPI_GetTelemetryIngestionConfigAsync_d_12>(get_class());
        }
        inline app::OneDSEventsAPI_GetTelemetryIngestionConfigAsync_d_12__Boxed* box(app::OneDSEventsAPI_GetTelemetryIngestionConfigAsync_d_12 value) {
            return il2cpp::box_value<app::OneDSEventsAPI_GetTelemetryIngestionConfigAsync_d_12__Boxed>(get_class(), value);
        }
    } // namespace OneDSEventsAPI_GetTelemetryIngestionConfigAsync_d_12
} // namespace app::classes::types
