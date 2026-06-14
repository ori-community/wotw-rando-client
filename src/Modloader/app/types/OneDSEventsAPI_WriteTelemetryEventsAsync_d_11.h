#pragma once
#include <Modloader/app/structs/OneDSEventsAPI_WriteTelemetryEventsAsync_d_11.h>
#include <Modloader/app/structs/OneDSEventsAPI_WriteTelemetryEventsAsync_d_11__Boxed.h>
#include <Modloader/app/structs/OneDSEventsAPI_WriteTelemetryEventsAsync_d_11__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OneDSEventsAPI_WriteTelemetryEventsAsync_d_11 {
        inline app::OneDSEventsAPI_WriteTelemetryEventsAsync_d_11__Class** type_info() {
            static app::OneDSEventsAPI_WriteTelemetryEventsAsync_d_11__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OneDSEventsAPI_WriteTelemetryEventsAsync_d_11__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OneDSEventsAPI_WriteTelemetryEventsAsync_d_11__Class* get_class() {
            return il2cpp::get_nested_class<app::OneDSEventsAPI_WriteTelemetryEventsAsync_d_11__Class>(type_info(), "PlayFab", "OneDSEventsAPI", "<WriteTelemetryEventsAsync>d__11");
        }
        inline app::OneDSEventsAPI_WriteTelemetryEventsAsync_d_11* create() {
            return il2cpp::create_object<app::OneDSEventsAPI_WriteTelemetryEventsAsync_d_11>(get_class());
        }
        inline app::OneDSEventsAPI_WriteTelemetryEventsAsync_d_11__Boxed* box(app::OneDSEventsAPI_WriteTelemetryEventsAsync_d_11 value) {
            return il2cpp::box_value<app::OneDSEventsAPI_WriteTelemetryEventsAsync_d_11__Boxed>(get_class(), value);
        }
    } // namespace OneDSEventsAPI_WriteTelemetryEventsAsync_d_11
} // namespace app::classes::types
