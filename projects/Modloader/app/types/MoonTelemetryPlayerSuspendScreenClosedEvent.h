#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonTelemetryPlayerSuspendScreenClosedEvent__Class.h>
#include <Modloader/app/structs/MoonTelemetryPlayerSuspendScreenClosedEvent.h>

namespace app::classes::types {
    namespace MoonTelemetryPlayerSuspendScreenClosedEvent {
        namespace {
            inline app::MoonTelemetryPlayerSuspendScreenClosedEvent__Class* type_info_ref = nullptr;
        }
        inline app::MoonTelemetryPlayerSuspendScreenClosedEvent__Class** type_info = &type_info_ref;
        inline app::MoonTelemetryPlayerSuspendScreenClosedEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryPlayerSuspendScreenClosedEvent__Class>(type_info, "", "MoonTelemetryPlayerSuspendScreenClosedEvent");
        }
        inline app::MoonTelemetryPlayerSuspendScreenClosedEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryPlayerSuspendScreenClosedEvent>(get_class());
        }
    } // namespace MoonTelemetryPlayerSuspendScreenClosedEvent
} // namespace app::classes::types
