#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetrySceneEvent {
        namespace {
            app::MoonTelemetrySceneEvent__Class* type_info_ref = nullptr;
        }
        app::MoonTelemetrySceneEvent__Class** type_info = &type_info_ref;
        inline app::MoonTelemetrySceneEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetrySceneEvent__Class>(type_info, "", "MoonTelemetrySceneEvent");
        }
        inline app::MoonTelemetrySceneEvent* create() {
            return il2cpp::create_object<app::MoonTelemetrySceneEvent>(get_class());
        }
        inline app::MoonTelemetrySceneEvent__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonTelemetrySceneEvent__Array>(get_class(), size);
        }
    } // namespace MoonTelemetrySceneEvent
} // namespace app::classes::types
