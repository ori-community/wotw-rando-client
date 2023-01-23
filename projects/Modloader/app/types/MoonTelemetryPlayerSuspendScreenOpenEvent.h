#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MoonTelemetryPlayerSuspendScreenOpenEvent__Class.h>
#include <Modloader/app/structs/MoonTelemetryPlayerSuspendScreenOpenEvent.h>

namespace app::classes::types {
    namespace MoonTelemetryPlayerSuspendScreenOpenEvent {
        namespace {
            inline app::MoonTelemetryPlayerSuspendScreenOpenEvent__Class* type_info_ref = nullptr;
        }
        inline app::MoonTelemetryPlayerSuspendScreenOpenEvent__Class** type_info = &type_info_ref;
        inline app::MoonTelemetryPlayerSuspendScreenOpenEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryPlayerSuspendScreenOpenEvent__Class>(type_info, "", "MoonTelemetryPlayerSuspendScreenOpenEvent");
        }
        inline app::MoonTelemetryPlayerSuspendScreenOpenEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryPlayerSuspendScreenOpenEvent>(get_class());
        }
    } // namespace MoonTelemetryPlayerSuspendScreenOpenEvent
} // namespace app::classes::types
