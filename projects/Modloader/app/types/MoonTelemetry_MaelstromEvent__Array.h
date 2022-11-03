#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetry_MaelstromEvent__Array {
        namespace {
            inline app::MoonTelemetry_MaelstromEvent__Array__Class* type_info_ref = nullptr;
        }
        inline app::MoonTelemetry_MaelstromEvent__Array__Class** type_info = &type_info_ref;
        inline app::MoonTelemetry_MaelstromEvent__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetry_MaelstromEvent__Array__Class>(type_info, "", "MoonTelemetry+MaelstromEvent[]");
        }
        inline app::MoonTelemetry_MaelstromEvent__Array* create() {
            return il2cpp::create_object<app::MoonTelemetry_MaelstromEvent__Array>(get_class());
        }
    } // namespace MoonTelemetry_MaelstromEvent__Array
} // namespace app::classes::types
