#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetryDebugLogEvent {
        inline app::MoonTelemetryDebugLogEvent__Class** type_info = (app::MoonTelemetryDebugLogEvent__Class**)(modloader::win::memory::resolve_rva(0x04758570));
        inline app::MoonTelemetryDebugLogEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryDebugLogEvent__Class>(type_info, "", "MoonTelemetryDebugLogEvent");
        }
        inline app::MoonTelemetryDebugLogEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryDebugLogEvent>(get_class());
        }
    } // namespace MoonTelemetryDebugLogEvent
} // namespace app::classes::types
