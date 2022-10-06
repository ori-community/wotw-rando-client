#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventTrigger_Entry {
        namespace {
            app::EventTrigger_Entry__Class* type_info_ref = nullptr;
        }
        app::EventTrigger_Entry__Class** type_info = &type_info_ref;
        inline app::EventTrigger_Entry__Class* get_class() {
            return il2cpp::get_nested_class<app::EventTrigger_Entry__Class>(type_info, "UnityEngine.EventSystems", "EventTrigger", "Entry");
        }
        inline app::EventTrigger_Entry* create() {
            return il2cpp::create_object<app::EventTrigger_Entry>(get_class());
        }
        inline app::EventTrigger_Entry__Array* create_array(int size) {
            return il2cpp::array_new<app::EventTrigger_Entry__Array>(get_class(), size);
        }
        inline app::EventTrigger_Entry__Array* create_array(const std::vector<app::EventTrigger_Entry*>& items) {
            return il2cpp::array_new<app::EventTrigger_Entry__Array>(get_class(), items);
        }
    } // namespace EventTrigger_Entry
} // namespace app::classes::types
