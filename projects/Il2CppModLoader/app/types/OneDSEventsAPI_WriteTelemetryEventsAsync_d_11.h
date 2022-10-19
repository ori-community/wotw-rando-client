#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace OneDSEventsAPI_WriteTelemetryEventsAsync_d_11 {
        namespace {
            inline app::OneDSEventsAPI_WriteTelemetryEventsAsync_d_11__Class* type_info_ref = nullptr;
        }
        inline app::OneDSEventsAPI_WriteTelemetryEventsAsync_d_11__Class** type_info = &type_info_ref;
        inline app::OneDSEventsAPI_WriteTelemetryEventsAsync_d_11__Class* get_class() {
            return il2cpp::get_nested_class<app::OneDSEventsAPI_WriteTelemetryEventsAsync_d_11__Class>(type_info, "PlayFab", "OneDSEventsAPI", "<WriteTelemetryEventsAsync>d__11");
        }
        inline app::OneDSEventsAPI_WriteTelemetryEventsAsync_d_11* create() {
            return il2cpp::create_object<app::OneDSEventsAPI_WriteTelemetryEventsAsync_d_11>(get_class());
        }
        inline app::OneDSEventsAPI_WriteTelemetryEventsAsync_d_11__Boxed* box(app::OneDSEventsAPI_WriteTelemetryEventsAsync_d_11 value) {
            return il2cpp::box_value<app::OneDSEventsAPI_WriteTelemetryEventsAsync_d_11__Boxed>(get_class(), value);
        }
    } // namespace OneDSEventsAPI_WriteTelemetryEventsAsync_d_11
} // namespace app::classes::types
