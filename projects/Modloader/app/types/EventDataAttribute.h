#pragma once
#include <Modloader/app/structs/EventDataAttribute.h>
#include <Modloader/app/structs/EventDataAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventDataAttribute {
        inline app::EventDataAttribute__Class** type_info() {
            static app::EventDataAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventDataAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventDataAttribute__Class* get_class() {
            return il2cpp::get_class<app::EventDataAttribute__Class>(type_info(), "System.Diagnostics.Tracing", "EventDataAttribute");
        }
        inline app::EventDataAttribute* create() {
            return il2cpp::create_object<app::EventDataAttribute>(get_class());
        }
    } // namespace EventDataAttribute
} // namespace app::classes::types
