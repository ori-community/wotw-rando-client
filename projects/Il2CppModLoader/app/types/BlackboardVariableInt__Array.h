#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BlackboardVariableInt__Array {
        namespace {
            app::BlackboardVariableInt__Array__Class* type_info_ref = nullptr;
        }
        app::BlackboardVariableInt__Array__Class** type_info = &type_info_ref;
        inline app::BlackboardVariableInt__Array__Class* get_class() {
            return il2cpp::get_class<app::BlackboardVariableInt__Array__Class>(type_info, "Moon.BehaviourSystem", "BlackboardVariableInt[]");
        }
        inline app::BlackboardVariableInt__Array* create() {
            return il2cpp::create_object<app::BlackboardVariableInt__Array>(get_class());
        }
    } // namespace BlackboardVariableInt__Array
} // namespace app::classes::types
