#pragma once
#include <Modloader/app/structs/IBehaviourNode__Array.h>
#include <Modloader/app/structs/IBehaviourNode__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IBehaviourNode__Array {
        inline app::IBehaviourNode__Array__Class** type_info() {
            static app::IBehaviourNode__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IBehaviourNode__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IBehaviourNode__Array__Class* get_class() {
            return il2cpp::get_class<app::IBehaviourNode__Array__Class>(type_info(), "Moon.BehaviourSystem", "IBehaviourNode[]");
        }
        inline app::IBehaviourNode__Array* create() {
            return il2cpp::create_object<app::IBehaviourNode__Array>(get_class());
        }
    } // namespace IBehaviourNode__Array
} // namespace app::classes::types
