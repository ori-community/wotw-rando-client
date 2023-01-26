#pragma once
#include <Modloader/app/structs/EventInfo_AddEventAdapter.h>
#include <Modloader/app/structs/EventInfo_AddEventAdapter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EventInfo_AddEventAdapter {
        inline app::EventInfo_AddEventAdapter__Class** type_info() {
            static app::EventInfo_AddEventAdapter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EventInfo_AddEventAdapter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EventInfo_AddEventAdapter__Class* get_class() {
            return il2cpp::get_nested_class<app::EventInfo_AddEventAdapter__Class>(type_info(), "System.Reflection", "EventInfo", "AddEventAdapter");
        }
        inline app::EventInfo_AddEventAdapter* create() {
            return il2cpp::create_object<app::EventInfo_AddEventAdapter>(get_class());
        }
    } // namespace EventInfo_AddEventAdapter
} // namespace app::classes::types
