#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonTelemetryCallback__Class.h>
#include <Modloader/app/structs/MoonTelemetryCallback.h>

namespace app::classes::types {
    namespace MoonTelemetryCallback {
        namespace {
            inline app::MoonTelemetryCallback__Class* type_info_ref = nullptr;
        }
        inline app::MoonTelemetryCallback__Class** type_info = &type_info_ref;
        inline app::MoonTelemetryCallback__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryCallback__Class>(type_info, "Moon.Telemetry.Web", "MoonTelemetryCallback");
        }
        inline app::MoonTelemetryCallback* create() {
            return il2cpp::create_object<app::MoonTelemetryCallback>(get_class());
        }
    } // namespace MoonTelemetryCallback
} // namespace app::classes::types
