#pragma once
#include <Modloader/app/structs/EventTrigger_Entry__Array.h>
#include <Modloader/app/structs/EventTrigger_Entry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventTrigger_Entry__Array {
        inline app::EventTrigger_Entry__Array__Class** type_info() {
            static app::EventTrigger_Entry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventTrigger_Entry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventTrigger_Entry__Array__Class* get_class() {
            return il2cpp::get_class<app::EventTrigger_Entry__Array__Class>(type_info(), "UnityEngine.EventSystems", "EventTrigger+Entry[]");
        }
        inline app::EventTrigger_Entry__Array* create() {
            return il2cpp::create_object<app::EventTrigger_Entry__Array>(get_class());
        }
    } // namespace EventTrigger_Entry__Array
} // namespace app::classes::types
