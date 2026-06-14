#pragma once
#include <Modloader/app/structs/QueryTriggerInteraction__Enum.h>
#include <Modloader/app/structs/QueryTriggerInteraction__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QueryTriggerInteraction__Enum {
        inline app::QueryTriggerInteraction__Enum__Class** type_info() {
            static app::QueryTriggerInteraction__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QueryTriggerInteraction__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QueryTriggerInteraction__Enum__Class* get_class() {
            return il2cpp::get_class<app::QueryTriggerInteraction__Enum__Class>(type_info(), "UnityEngine", "QueryTriggerInteraction");
        }
        inline app::QueryTriggerInteraction__Enum* create() {
            return il2cpp::create_object<app::QueryTriggerInteraction__Enum>(get_class());
        }
    } // namespace QueryTriggerInteraction__Enum
} // namespace app::classes::types
