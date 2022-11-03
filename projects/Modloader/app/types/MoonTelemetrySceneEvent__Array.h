#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetrySceneEvent__Array {
        namespace {
            inline app::MoonTelemetrySceneEvent__Array__Class* type_info_ref = nullptr;
        }
        inline app::MoonTelemetrySceneEvent__Array__Class** type_info = &type_info_ref;
        inline app::MoonTelemetrySceneEvent__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetrySceneEvent__Array__Class>(type_info, "", "MoonTelemetrySceneEvent[]");
        }
        inline app::MoonTelemetrySceneEvent__Array* create() {
            return il2cpp::create_object<app::MoonTelemetrySceneEvent__Array>(get_class());
        }
    } // namespace MoonTelemetrySceneEvent__Array
} // namespace app::classes::types
