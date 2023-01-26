#pragma once
#include <Modloader/app/structs/MoonTelemetrySceneEvent_EventSceneState__Enum.h>
#include <Modloader/app/structs/MoonTelemetrySceneEvent_EventSceneState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetrySceneEvent_EventSceneState__Enum {
        inline app::MoonTelemetrySceneEvent_EventSceneState__Enum__Class** type_info() {
            static app::MoonTelemetrySceneEvent_EventSceneState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTelemetrySceneEvent_EventSceneState__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475CB70));
            }
            return cache;
        }
        inline app::MoonTelemetrySceneEvent_EventSceneState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTelemetrySceneEvent_EventSceneState__Enum__Class>(type_info(), "", "MoonTelemetrySceneEvent", "EventSceneState");
        }
        inline app::MoonTelemetrySceneEvent_EventSceneState__Enum* create() {
            return il2cpp::create_object<app::MoonTelemetrySceneEvent_EventSceneState__Enum>(get_class());
        }
    } // namespace MoonTelemetrySceneEvent_EventSceneState__Enum
} // namespace app::classes::types
