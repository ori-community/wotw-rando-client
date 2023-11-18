#pragma once
#include <Modloader/app/structs/MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array.h>
#include <Modloader/app/structs/MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array {
        inline app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array__Class** type_info() {
            static app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array__Class>(type_info(), "", "MoonTelemetryCharacterHeartbeatEvent+Cleanup[]");
        }
        inline app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array* create() {
            return il2cpp::create_object<app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array>(get_class());
        }
    } // namespace MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array
} // namespace app::classes::types
