#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonTelemetryAbilityChangeEvent__Class.h>
#include <Modloader/app/structs/MoonTelemetryAbilityChangeEvent.h>

namespace app::classes::types {
    namespace MoonTelemetryAbilityChangeEvent {
        inline app::MoonTelemetryAbilityChangeEvent__Class** type_info = (app::MoonTelemetryAbilityChangeEvent__Class**)(modloader::win::memory::resolve_rva(0x0476F2A0));
        inline app::MoonTelemetryAbilityChangeEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryAbilityChangeEvent__Class>(type_info, "", "MoonTelemetryAbilityChangeEvent");
        }
        inline app::MoonTelemetryAbilityChangeEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryAbilityChangeEvent>(get_class());
        }
    } // namespace MoonTelemetryAbilityChangeEvent
} // namespace app::classes::types
