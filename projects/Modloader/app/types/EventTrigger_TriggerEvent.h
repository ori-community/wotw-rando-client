#pragma once
#include <Modloader/app/structs/EventTrigger_TriggerEvent.h>
#include <Modloader/app/structs/EventTrigger_TriggerEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventTrigger_TriggerEvent {
        inline app::EventTrigger_TriggerEvent__Class** type_info() {
            static app::EventTrigger_TriggerEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EventTrigger_TriggerEvent__Class**)(modloader::win::memory::resolve_rva(0x04700DD8));
            }
            return cache;
        }
        inline app::EventTrigger_TriggerEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::EventTrigger_TriggerEvent__Class>(type_info(), "UnityEngine.EventSystems", "EventTrigger", "TriggerEvent");
        }
        inline app::EventTrigger_TriggerEvent* create() {
            return il2cpp::create_object<app::EventTrigger_TriggerEvent>(get_class());
        }
    } // namespace EventTrigger_TriggerEvent
} // namespace app::classes::types
