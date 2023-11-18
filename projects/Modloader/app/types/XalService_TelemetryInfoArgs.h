#pragma once
#include <Modloader/app/structs/XalService_TelemetryInfoArgs.h>
#include <Modloader/app/structs/XalService_TelemetryInfoArgs__Boxed.h>
#include <Modloader/app/structs/XalService_TelemetryInfoArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalService_TelemetryInfoArgs {
        inline app::XalService_TelemetryInfoArgs__Class** type_info() {
            static app::XalService_TelemetryInfoArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XalService_TelemetryInfoArgs__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XalService_TelemetryInfoArgs__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_TelemetryInfoArgs__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "XalService", "TelemetryInfoArgs");
        }
        inline app::XalService_TelemetryInfoArgs* create() {
            return il2cpp::create_object<app::XalService_TelemetryInfoArgs>(get_class());
        }
        inline app::XalService_TelemetryInfoArgs__Boxed* box(app::XalService_TelemetryInfoArgs value) {
            return il2cpp::box_value<app::XalService_TelemetryInfoArgs__Boxed>(get_class(), value);
        }
    } // namespace XalService_TelemetryInfoArgs
} // namespace app::classes::types
