#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetryEvent {
        namespace {
            inline app::MoonTelemetryEvent__Class* type_info_ref = nullptr;
        }
        inline app::MoonTelemetryEvent__Class** type_info = &type_info_ref;
        inline app::MoonTelemetryEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryEvent__Class>(type_info, "", "MoonTelemetryEvent");
        }
        inline app::MoonTelemetryEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryEvent>(get_class());
        }
    } // namespace MoonTelemetryEvent
} // namespace app::classes::types
