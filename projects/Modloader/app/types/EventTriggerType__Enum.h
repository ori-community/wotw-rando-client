#pragma once
#include <Modloader/app/structs/EventTriggerType__Enum.h>
#include <Modloader/app/structs/EventTriggerType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventTriggerType__Enum {
        inline app::EventTriggerType__Enum__Class** type_info() {
            static app::EventTriggerType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventTriggerType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventTriggerType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventTriggerType__Enum__Class>(type_info(), "UnityEngine.EventSystems", "EventTriggerType");
        }
        inline app::EventTriggerType__Enum* create() {
            return il2cpp::create_object<app::EventTriggerType__Enum>(get_class());
        }
    } // namespace EventTriggerType__Enum
} // namespace app::classes::types
