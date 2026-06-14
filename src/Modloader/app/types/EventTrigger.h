#pragma once
#include <Modloader/app/structs/EventTrigger.h>
#include <Modloader/app/structs/EventTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventTrigger {
        inline app::EventTrigger__Class** type_info() {
            static app::EventTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventTrigger__Class* get_class() {
            return il2cpp::get_class<app::EventTrigger__Class>(type_info(), "UnityEngine.EventSystems", "EventTrigger");
        }
        inline app::EventTrigger* create() {
            return il2cpp::create_object<app::EventTrigger>(get_class());
        }
    } // namespace EventTrigger
} // namespace app::classes::types
