#pragma once
#include <Modloader/app/structs/MoonTelemetryDebugLogEvent.h>
#include <Modloader/app/structs/MoonTelemetryDebugLogEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryDebugLogEvent {
        inline app::MoonTelemetryDebugLogEvent__Class** type_info() {
            static app::MoonTelemetryDebugLogEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTelemetryDebugLogEvent__Class**)(modloader::win::memory::resolve_rva(0x04758570));
            }
            return cache;
        }
        inline app::MoonTelemetryDebugLogEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryDebugLogEvent__Class>(type_info(), "", "MoonTelemetryDebugLogEvent");
        }
        inline app::MoonTelemetryDebugLogEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryDebugLogEvent>(get_class());
        }
    } // namespace MoonTelemetryDebugLogEvent
} // namespace app::classes::types
