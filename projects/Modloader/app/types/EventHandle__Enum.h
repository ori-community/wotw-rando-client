#pragma once
#include <Modloader/app/structs/EventHandle__Enum.h>
#include <Modloader/app/structs/EventHandle__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventHandle__Enum {
        inline app::EventHandle__Enum__Class** type_info() {
            static app::EventHandle__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventHandle__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventHandle__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventHandle__Enum__Class>(type_info(), "UnityEngine.EventSystems", "EventHandle");
        }
        inline app::EventHandle__Enum* create() {
            return il2cpp::create_object<app::EventHandle__Enum>(get_class());
        }
    } // namespace EventHandle__Enum
} // namespace app::classes::types
