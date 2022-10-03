#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventTrigger_TriggerEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EventTrigger_TriggerEvent__Class** type_info;
        inline app::EventTrigger_TriggerEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::EventTrigger_TriggerEvent__Class>(type_info, "UnityEngine.EventSystems", "EventTrigger", "TriggerEvent");
        }
        inline app::EventTrigger_TriggerEvent* create() {
            return il2cpp::create_object<app::EventTrigger_TriggerEvent>(get_class());
        }
    } // namespace EventTrigger_TriggerEvent
} // namespace app::classes::types
