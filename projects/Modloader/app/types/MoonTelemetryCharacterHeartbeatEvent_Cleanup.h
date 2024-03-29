#pragma once
#include <Modloader/app/structs/MoonTelemetryCharacterHeartbeatEvent_Cleanup.h>
#include <Modloader/app/structs/MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array.h>
#include <Modloader/app/structs/MoonTelemetryCharacterHeartbeatEvent_Cleanup__Boxed.h>
#include <Modloader/app/structs/MoonTelemetryCharacterHeartbeatEvent_Cleanup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryCharacterHeartbeatEvent_Cleanup {
        inline app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Class** type_info() {
            static app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Class**)(modloader::win::memory::resolve_rva(0x0475C5F8));
            }
            return cache;
        }
        inline app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Class>(type_info(), "", "MoonTelemetryCharacterHeartbeatEvent", "Cleanup");
        }
        inline app::MoonTelemetryCharacterHeartbeatEvent_Cleanup* create() {
            return il2cpp::create_object<app::MoonTelemetryCharacterHeartbeatEvent_Cleanup>(get_class());
        }
        inline app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Boxed* box(app::MoonTelemetryCharacterHeartbeatEvent_Cleanup value) {
            return il2cpp::box_value<app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Boxed>(get_class(), value);
        }
        inline app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array>(get_class(), size);
        }
        inline app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array* create_array(const std::vector<app::MoonTelemetryCharacterHeartbeatEvent_Cleanup>& items) {
            return il2cpp::array_new<app::MoonTelemetryCharacterHeartbeatEvent_Cleanup__Array>(get_class(), items);
        }
    } // namespace MoonTelemetryCharacterHeartbeatEvent_Cleanup
} // namespace app::classes::types
