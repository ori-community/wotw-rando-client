#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetryPlayerSessionEndEvent {
        inline app::MoonTelemetryPlayerSessionEndEvent__Class** type_info = (app::MoonTelemetryPlayerSessionEndEvent__Class**)(modloader::win::memory::resolve_rva(0x04748AB8));
        inline app::MoonTelemetryPlayerSessionEndEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryPlayerSessionEndEvent__Class>(type_info, "", "MoonTelemetryPlayerSessionEndEvent");
        }
        inline app::MoonTelemetryPlayerSessionEndEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryPlayerSessionEndEvent>(get_class());
        }
    } // namespace MoonTelemetryPlayerSessionEndEvent
} // namespace app::classes::types
