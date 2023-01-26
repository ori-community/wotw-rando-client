#pragma once
#include <Modloader/app/structs/TelemetryEvent__Enum.h>
#include <Modloader/app/structs/TelemetryEvent__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TelemetryEvent__Enum {
        inline app::TelemetryEvent__Enum__Class** type_info() {
            static app::TelemetryEvent__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TelemetryEvent__Enum__Class**)(modloader::win::memory::resolve_rva(0x0478C300));
            }
            return cache;
        }
        inline app::TelemetryEvent__Enum__Class* get_class() {
            return il2cpp::get_class<app::TelemetryEvent__Enum__Class>(type_info(), "", "TelemetryEvent");
        }
        inline app::TelemetryEvent__Enum* create() {
            return il2cpp::create_object<app::TelemetryEvent__Enum>(get_class());
        }
    } // namespace TelemetryEvent__Enum
} // namespace app::classes::types
