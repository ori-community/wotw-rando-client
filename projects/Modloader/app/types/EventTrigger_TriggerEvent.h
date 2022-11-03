#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EventTrigger_TriggerEvent {
        inline app::EventTrigger_TriggerEvent__Class** type_info = (app::EventTrigger_TriggerEvent__Class**)(modloader::win::memory::resolve_rva(0x04700DD8));
        inline app::EventTrigger_TriggerEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::EventTrigger_TriggerEvent__Class>(type_info, "UnityEngine.EventSystems", "EventTrigger", "TriggerEvent");
        }
        inline app::EventTrigger_TriggerEvent* create() {
            return il2cpp::create_object<app::EventTrigger_TriggerEvent>(get_class());
        }
    } // namespace EventTrigger_TriggerEvent
} // namespace app::classes::types
