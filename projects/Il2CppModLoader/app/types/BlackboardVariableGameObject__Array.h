#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BlackboardVariableGameObject__Array {
        namespace {
            app::BlackboardVariableGameObject__Array__Class* type_info_ref = nullptr;
        }
        app::BlackboardVariableGameObject__Array__Class** type_info = &type_info_ref;
        inline app::BlackboardVariableGameObject__Array__Class* get_class() {
            return il2cpp::get_class<app::BlackboardVariableGameObject__Array__Class>(type_info, "Moon.BehaviourSystem", "BlackboardVariableGameObject[]");
        }
        inline app::BlackboardVariableGameObject__Array* create() {
            return il2cpp::create_object<app::BlackboardVariableGameObject__Array>(get_class());
        }
    } // namespace BlackboardVariableGameObject__Array
} // namespace app::classes::types
