#pragma once
#include <Modloader/app/structs/EventTriggerAnimatorCondition.h>
#include <Modloader/app/structs/EventTriggerAnimatorCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventTriggerAnimatorCondition {
        inline app::EventTriggerAnimatorCondition__Class** type_info() {
            static app::EventTriggerAnimatorCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventTriggerAnimatorCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventTriggerAnimatorCondition__Class* get_class() {
            return il2cpp::get_class<app::EventTriggerAnimatorCondition__Class>(type_info(), "", "EventTriggerAnimatorCondition");
        }
        inline app::EventTriggerAnimatorCondition* create() {
            return il2cpp::create_object<app::EventTriggerAnimatorCondition>(get_class());
        }
    } // namespace EventTriggerAnimatorCondition
} // namespace app::classes::types
