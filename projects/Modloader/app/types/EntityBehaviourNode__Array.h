#pragma once
#include <Modloader/app/structs/EntityBehaviourNode__Array.h>
#include <Modloader/app/structs/EntityBehaviourNode__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityBehaviourNode__Array {
        inline app::EntityBehaviourNode__Array__Class** type_info() {
            static app::EntityBehaviourNode__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityBehaviourNode__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityBehaviourNode__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityBehaviourNode__Array__Class>(type_info(), "Moon.BehaviourSystem", "EntityBehaviourNode[]");
        }
        inline app::EntityBehaviourNode__Array* create() {
            return il2cpp::create_object<app::EntityBehaviourNode__Array>(get_class());
        }
    } // namespace EntityBehaviourNode__Array
} // namespace app::classes::types
