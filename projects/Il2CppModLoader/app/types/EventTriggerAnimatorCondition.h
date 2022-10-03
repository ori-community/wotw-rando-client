#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventTriggerAnimatorCondition {
        namespace {
            app::EventTriggerAnimatorCondition__Class* type_info_ref = nullptr;
        }
        app::EventTriggerAnimatorCondition__Class** type_info = &type_info_ref;
        inline app::EventTriggerAnimatorCondition__Class* get_class() {
            return il2cpp::get_class<app::EventTriggerAnimatorCondition__Class>(type_info, "", "EventTriggerAnimatorCondition");
        }
        inline app::EventTriggerAnimatorCondition* create() {
            return il2cpp::create_object<app::EventTriggerAnimatorCondition>(get_class());
        }
    } // namespace EventTriggerAnimatorCondition
} // namespace app::classes::types
