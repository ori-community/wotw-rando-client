#pragma once
#include <Modloader/app/structs/BehaviourNode__Array.h>
#include <Modloader/app/structs/BehaviourNode__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BehaviourNode__Array {
        inline app::BehaviourNode__Array__Class** type_info() {
            static app::BehaviourNode__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BehaviourNode__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BehaviourNode__Array__Class* get_class() {
            return il2cpp::get_class<app::BehaviourNode__Array__Class>(type_info(), "Moon.BehaviourSystem", "BehaviourNode[]");
        }
        inline app::BehaviourNode__Array* create() {
            return il2cpp::create_object<app::BehaviourNode__Array>(get_class());
        }
    } // namespace BehaviourNode__Array
} // namespace app::classes::types
