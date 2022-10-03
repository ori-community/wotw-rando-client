#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventTriggerType__Enum {
        namespace {
            app::EventTriggerType__Enum__Class* type_info_ref = nullptr;
        }
        app::EventTriggerType__Enum__Class** type_info = &type_info_ref;
        inline app::EventTriggerType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventTriggerType__Enum__Class>(type_info, "UnityEngine.EventSystems", "EventTriggerType");
        }
        inline app::EventTriggerType__Enum* create() {
            return il2cpp::create_object<app::EventTriggerType__Enum>(get_class());
        }
    } // namespace EventTriggerType__Enum
} // namespace app::classes::types
