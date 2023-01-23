#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonTelemetryClientHeartbeatEvent__Class.h>
#include <Modloader/app/structs/MoonTelemetryClientHeartbeatEvent.h>

namespace app::classes::types {
    namespace MoonTelemetryClientHeartbeatEvent {
        namespace {
            inline app::MoonTelemetryClientHeartbeatEvent__Class* type_info_ref = nullptr;
        }
        inline app::MoonTelemetryClientHeartbeatEvent__Class** type_info = &type_info_ref;
        inline app::MoonTelemetryClientHeartbeatEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryClientHeartbeatEvent__Class>(type_info, "", "MoonTelemetryClientHeartbeatEvent");
        }
        inline app::MoonTelemetryClientHeartbeatEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryClientHeartbeatEvent>(get_class());
        }
    } // namespace MoonTelemetryClientHeartbeatEvent
} // namespace app::classes::types
