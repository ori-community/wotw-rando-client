#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IBehaviourNode__Array {
        namespace {
            app::IBehaviourNode__Array__Class* type_info_ref = nullptr;
        }
        app::IBehaviourNode__Array__Class** type_info = &type_info_ref;
        inline app::IBehaviourNode__Array__Class* get_class() {
            return il2cpp::get_class<app::IBehaviourNode__Array__Class>(type_info, "Moon.BehaviourSystem", "IBehaviourNode[]");
        }
        inline app::IBehaviourNode__Array* create() {
            return il2cpp::create_object<app::IBehaviourNode__Array>(get_class());
        }
    } // namespace IBehaviourNode__Array
} // namespace app::classes::types
