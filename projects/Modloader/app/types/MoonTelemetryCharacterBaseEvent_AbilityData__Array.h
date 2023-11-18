#pragma once
#include <Modloader/app/structs/MoonTelemetryCharacterBaseEvent_AbilityData__Array.h>
#include <Modloader/app/structs/MoonTelemetryCharacterBaseEvent_AbilityData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryCharacterBaseEvent_AbilityData__Array {
        inline app::MoonTelemetryCharacterBaseEvent_AbilityData__Array__Class** type_info() {
            static app::MoonTelemetryCharacterBaseEvent_AbilityData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTelemetryCharacterBaseEvent_AbilityData__Array__Class**)(modloader::win::memory::resolve_rva(0x047972D0));
            }
            return cache;
        }
        inline app::MoonTelemetryCharacterBaseEvent_AbilityData__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryCharacterBaseEvent_AbilityData__Array__Class>(type_info(), "", "MoonTelemetryCharacterBaseEvent+AbilityData[]");
        }
        inline app::MoonTelemetryCharacterBaseEvent_AbilityData__Array* create() {
            return il2cpp::create_object<app::MoonTelemetryCharacterBaseEvent_AbilityData__Array>(get_class());
        }
    } // namespace MoonTelemetryCharacterBaseEvent_AbilityData__Array
} // namespace app::classes::types
