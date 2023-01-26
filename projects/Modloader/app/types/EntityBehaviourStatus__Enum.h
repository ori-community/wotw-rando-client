#pragma once
#include <Modloader/app/structs/EntityBehaviourStatus__Enum.h>
#include <Modloader/app/structs/EntityBehaviourStatus__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityBehaviourStatus__Enum {
        inline app::EntityBehaviourStatus__Enum__Class** type_info() {
            static app::EntityBehaviourStatus__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityBehaviourStatus__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityBehaviourStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::EntityBehaviourStatus__Enum__Class>(type_info(), "Moon", "EntityBehaviourStatus");
        }
        inline app::EntityBehaviourStatus__Enum* create() {
            return il2cpp::create_object<app::EntityBehaviourStatus__Enum>(get_class());
        }
    } // namespace EntityBehaviourStatus__Enum
} // namespace app::classes::types
