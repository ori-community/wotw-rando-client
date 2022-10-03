#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventTrigger_Entry__Array {
        namespace {
            app::EventTrigger_Entry__Array__Class* type_info_ref = nullptr;
        }
        app::EventTrigger_Entry__Array__Class** type_info = &type_info_ref;
        inline app::EventTrigger_Entry__Array__Class* get_class() {
            return il2cpp::get_class<app::EventTrigger_Entry__Array__Class>(type_info, "UnityEngine.EventSystems", "EventTrigger+Entry[]");
        }
        inline app::EventTrigger_Entry__Array* create() {
            return il2cpp::create_object<app::EventTrigger_Entry__Array>(get_class());
        }
    } // namespace EventTrigger_Entry__Array
} // namespace app::classes::types
