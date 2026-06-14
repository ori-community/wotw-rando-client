#pragma once
#include <Modloader/app/structs/EventSystem__Array.h>
#include <Modloader/app/structs/EventSystem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventSystem__Array {
        inline app::EventSystem__Array__Class** type_info() {
            static app::EventSystem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventSystem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventSystem__Array__Class* get_class() {
            return il2cpp::get_class<app::EventSystem__Array__Class>(type_info(), "UnityEngine.EventSystems", "EventSystem[]");
        }
        inline app::EventSystem__Array* create() {
            return il2cpp::create_object<app::EventSystem__Array>(get_class());
        }
    } // namespace EventSystem__Array
} // namespace app::classes::types
