#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetrySceneEvent_EventSceneState__Enum {
        inline app::MoonTelemetrySceneEvent_EventSceneState__Enum__Class** type_info = (app::MoonTelemetrySceneEvent_EventSceneState__Enum__Class**)(modloader::win::memory::resolve_rva(0x0475CB70));
        inline app::MoonTelemetrySceneEvent_EventSceneState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTelemetrySceneEvent_EventSceneState__Enum__Class>(type_info, "", "MoonTelemetrySceneEvent", "EventSceneState");
        }
        inline app::MoonTelemetrySceneEvent_EventSceneState__Enum* create() {
            return il2cpp::create_object<app::MoonTelemetrySceneEvent_EventSceneState__Enum>(get_class());
        }
    } // namespace MoonTelemetrySceneEvent_EventSceneState__Enum
} // namespace app::classes::types
