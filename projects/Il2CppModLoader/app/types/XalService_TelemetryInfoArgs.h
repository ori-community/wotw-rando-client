#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XalService_TelemetryInfoArgs {
        namespace {
            inline app::XalService_TelemetryInfoArgs__Class* type_info_ref = nullptr;
        }
        inline app::XalService_TelemetryInfoArgs__Class** type_info = &type_info_ref;
        inline app::XalService_TelemetryInfoArgs__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_TelemetryInfoArgs__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalService", "TelemetryInfoArgs");
        }
        inline app::XalService_TelemetryInfoArgs* create() {
            return il2cpp::create_object<app::XalService_TelemetryInfoArgs>(get_class());
        }
        inline app::XalService_TelemetryInfoArgs__Boxed* box(app::XalService_TelemetryInfoArgs value) {
            return il2cpp::box_value<app::XalService_TelemetryInfoArgs__Boxed>(get_class(), value);
        }
    } // namespace XalService_TelemetryInfoArgs
} // namespace app::classes::types
