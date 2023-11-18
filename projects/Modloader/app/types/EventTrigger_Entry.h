#pragma once
#include <Modloader/app/structs/EventTrigger_Entry.h>
#include <Modloader/app/structs/EventTrigger_Entry__Array.h>
#include <Modloader/app/structs/EventTrigger_Entry__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventTrigger_Entry {
        inline app::EventTrigger_Entry__Class** type_info() {
            static app::EventTrigger_Entry__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventTrigger_Entry__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventTrigger_Entry__Class* get_class() {
            return il2cpp::get_nested_class<app::EventTrigger_Entry__Class>(type_info(), "UnityEngine.EventSystems", "EventTrigger", "Entry");
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
