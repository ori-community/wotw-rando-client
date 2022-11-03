#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetryPlayerSessionStartEvent {
        inline app::MoonTelemetryPlayerSessionStartEvent__Class** type_info = (app::MoonTelemetryPlayerSessionStartEvent__Class**)(modloader::win::memory::resolve_rva(0x04794B48));
        inline app::MoonTelemetryPlayerSessionStartEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryPlayerSessionStartEvent__Class>(type_info, "", "MoonTelemetryPlayerSessionStartEvent");
        }
        inline app::MoonTelemetryPlayerSessionStartEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryPlayerSessionStartEvent>(get_class());
        }
    } // namespace MoonTelemetryPlayerSessionStartEvent
} // namespace app::classes::types
