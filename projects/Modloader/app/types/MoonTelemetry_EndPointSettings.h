#pragma once
#include <Modloader/app/structs/MoonTelemetry_EndPointSettings.h>
#include <Modloader/app/structs/MoonTelemetry_EndPointSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetry_EndPointSettings {
        inline app::MoonTelemetry_EndPointSettings__Class** type_info() {
            static app::MoonTelemetry_EndPointSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTelemetry_EndPointSettings__Class**)(modloader::win::memory::resolve_rva(0x04770220));
            }
            return cache;
        }
        inline app::MoonTelemetry_EndPointSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTelemetry_EndPointSettings__Class>(type_info(), "", "MoonTelemetry", "EndPointSettings");
        }
        inline app::MoonTelemetry_EndPointSettings* create() {
            return il2cpp::create_object<app::MoonTelemetry_EndPointSettings>(get_class());
        }
    } // namespace MoonTelemetry_EndPointSettings
} // namespace app::classes::types
