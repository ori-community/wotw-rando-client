#pragma once
#include <Modloader/app/structs/EventIgnoreAttribute.h>
#include <Modloader/app/structs/EventIgnoreAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventIgnoreAttribute {
        inline app::EventIgnoreAttribute__Class** type_info() {
            static app::EventIgnoreAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventIgnoreAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventIgnoreAttribute__Class* get_class() {
            return il2cpp::get_class<app::EventIgnoreAttribute__Class>(type_info(), "System.Diagnostics.Tracing", "EventIgnoreAttribute");
        }
        inline app::EventIgnoreAttribute* create() {
            return il2cpp::create_object<app::EventIgnoreAttribute>(get_class());
        }
    } // namespace EventIgnoreAttribute
} // namespace app::classes::types
