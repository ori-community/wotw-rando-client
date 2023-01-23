#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonTelemetryCharacterBaseEvent_c__Class.h>
#include <Modloader/app/structs/MoonTelemetryCharacterBaseEvent_c.h>

namespace app::classes::types {
    namespace MoonTelemetryCharacterBaseEvent_c {
        inline app::MoonTelemetryCharacterBaseEvent_c__Class** type_info = (app::MoonTelemetryCharacterBaseEvent_c__Class**)(modloader::win::memory::resolve_rva(0x0472C878));
        inline app::MoonTelemetryCharacterBaseEvent_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTelemetryCharacterBaseEvent_c__Class>(type_info, "", "MoonTelemetryCharacterBaseEvent", "<>c");
        }
        inline app::MoonTelemetryCharacterBaseEvent_c* create() {
            return il2cpp::create_object<app::MoonTelemetryCharacterBaseEvent_c>(get_class());
        }
    } // namespace MoonTelemetryCharacterBaseEvent_c
} // namespace app::classes::types
