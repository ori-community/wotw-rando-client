#pragma once
#include <Modloader/app/structs/MoonTelemetryCallback.h>
#include <Modloader/app/structs/MoonTelemetryCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryCallback {
        inline app::MoonTelemetryCallback__Class** type_info() {
            static app::MoonTelemetryCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTelemetryCallback__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTelemetryCallback__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryCallback__Class>(type_info(), "Moon.Telemetry.Web", "MoonTelemetryCallback");
        }
        inline app::MoonTelemetryCallback* create() {
            return il2cpp::create_object<app::MoonTelemetryCallback>(get_class());
        }
    } // namespace MoonTelemetryCallback
} // namespace app::classes::types
