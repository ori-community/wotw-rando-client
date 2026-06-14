#pragma once
#include <Modloader/app/structs/TelemetryTimelineScene.h>
#include <Modloader/app/structs/TelemetryTimelineScene__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TelemetryTimelineScene {
        inline app::TelemetryTimelineScene__Class** type_info() {
            static app::TelemetryTimelineScene__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TelemetryTimelineScene__Class**)(modloader::win::memory::resolve_rva(0x047757B8));
            }
            return cache;
        }
        inline app::TelemetryTimelineScene__Class* get_class() {
            return il2cpp::get_class<app::TelemetryTimelineScene__Class>(type_info(), "Moon.Telemetry", "TelemetryTimelineScene");
        }
        inline app::TelemetryTimelineScene* create() {
            return il2cpp::create_object<app::TelemetryTimelineScene>(get_class());
        }
    } // namespace TelemetryTimelineScene
} // namespace app::classes::types
