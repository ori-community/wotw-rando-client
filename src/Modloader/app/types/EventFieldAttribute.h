#pragma once
#include <Modloader/app/structs/EventFieldAttribute.h>
#include <Modloader/app/structs/EventFieldAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventFieldAttribute {
        inline app::EventFieldAttribute__Class** type_info() {
            static app::EventFieldAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventFieldAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventFieldAttribute__Class* get_class() {
            return il2cpp::get_class<app::EventFieldAttribute__Class>(type_info(), "System.Diagnostics.Tracing", "EventFieldAttribute");
        }
        inline app::EventFieldAttribute* create() {
            return il2cpp::create_object<app::EventFieldAttribute>(get_class());
        }
    } // namespace EventFieldAttribute
} // namespace app::classes::types
