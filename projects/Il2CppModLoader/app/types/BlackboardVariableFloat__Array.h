#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BlackboardVariableFloat__Array {
        namespace {
            app::BlackboardVariableFloat__Array__Class* type_info_ref = nullptr;
        }
        app::BlackboardVariableFloat__Array__Class** type_info = &type_info_ref;
        inline app::BlackboardVariableFloat__Array__Class* get_class() {
            return il2cpp::get_class<app::BlackboardVariableFloat__Array__Class>(type_info, "Moon.BehaviourSystem", "BlackboardVariableFloat[]");
        }
        inline app::BlackboardVariableFloat__Array* create() {
            return il2cpp::create_object<app::BlackboardVariableFloat__Array>(get_class());
        }
    } // namespace BlackboardVariableFloat__Array
} // namespace app::classes::types
