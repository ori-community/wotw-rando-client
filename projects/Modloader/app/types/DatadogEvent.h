#pragma once
#include <Modloader/app/structs/DatadogEvent.h>
#include <Modloader/app/structs/DatadogEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DatadogEvent {
        inline app::DatadogEvent__Class** type_info() {
            static app::DatadogEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DatadogEvent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DatadogEvent__Class* get_class() {
            return il2cpp::get_class<app::DatadogEvent__Class>(type_info(), "", "DatadogEvent");
        }
        inline app::DatadogEvent* create() {
            return il2cpp::create_object<app::DatadogEvent>(get_class());
        }
    } // namespace DatadogEvent
} // namespace app::classes::types
