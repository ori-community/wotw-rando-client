#pragma once
#include <Modloader/app/structs/MoonTelemetrySceneEvent__Array.h>
#include <Modloader/app/structs/MoonTelemetrySceneEvent__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetrySceneEvent__Array {
        inline app::MoonTelemetrySceneEvent__Array__Class** type_info() {
            static app::MoonTelemetrySceneEvent__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTelemetrySceneEvent__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTelemetrySceneEvent__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetrySceneEvent__Array__Class>(type_info(), "", "MoonTelemetrySceneEvent[]");
        }
        inline app::MoonTelemetrySceneEvent__Array* create() {
            return il2cpp::create_object<app::MoonTelemetrySceneEvent__Array>(get_class());
        }
    } // namespace MoonTelemetrySceneEvent__Array
} // namespace app::classes::types
