#pragma once
#include <Modloader/app/structs/MoonTelemetrySceneEvent.h>
#include <Modloader/app/structs/MoonTelemetrySceneEvent__Array.h>
#include <Modloader/app/structs/MoonTelemetrySceneEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetrySceneEvent {
        inline app::MoonTelemetrySceneEvent__Class** type_info() {
            static app::MoonTelemetrySceneEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTelemetrySceneEvent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTelemetrySceneEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetrySceneEvent__Class>(type_info(), "", "MoonTelemetrySceneEvent");
        }
        inline app::MoonTelemetrySceneEvent* create() {
            return il2cpp::create_object<app::MoonTelemetrySceneEvent>(get_class());
        }
        inline app::MoonTelemetrySceneEvent__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonTelemetrySceneEvent__Array>(get_class(), size);
        }
        inline app::MoonTelemetrySceneEvent__Array* create_array(const std::vector<app::MoonTelemetrySceneEvent*>& items) {
            return il2cpp::array_new<app::MoonTelemetrySceneEvent__Array>(get_class(), items);
        }
    } // namespace MoonTelemetrySceneEvent
} // namespace app::classes::types
