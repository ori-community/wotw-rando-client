#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TelemetryTimelineScene {
        inline app::TelemetryTimelineScene__Class** type_info = (app::TelemetryTimelineScene__Class**)(modloader::win::memory::resolve_rva(0x047757B8));
        inline app::TelemetryTimelineScene__Class* get_class() {
            return il2cpp::get_class<app::TelemetryTimelineScene__Class>(type_info, "Moon.Telemetry", "TelemetryTimelineScene");
        }
        inline app::TelemetryTimelineScene* create() {
            return il2cpp::create_object<app::TelemetryTimelineScene>(get_class());
        }
    } // namespace TelemetryTimelineScene
} // namespace app::classes::types
