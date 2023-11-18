#pragma once
#include <Modloader/app/structs/EventSourceSettings__Enum.h>
#include <Modloader/app/structs/EventSourceSettings__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventSourceSettings__Enum {
        inline app::EventSourceSettings__Enum__Class** type_info() {
            static app::EventSourceSettings__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventSourceSettings__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventSourceSettings__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventSourceSettings__Enum__Class>(type_info(), "System.Diagnostics.Tracing", "EventSourceSettings");
        }
        inline app::EventSourceSettings__Enum* create() {
            return il2cpp::create_object<app::EventSourceSettings__Enum>(get_class());
        }
    } // namespace EventSourceSettings__Enum
} // namespace app::classes::types
