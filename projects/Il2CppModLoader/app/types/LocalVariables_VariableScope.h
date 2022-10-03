#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocalVariables_VariableScope {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LocalVariables_VariableScope__Class** type_info;
        inline app::LocalVariables_VariableScope__Class* get_class() {
            return il2cpp::get_nested_class<app::LocalVariables_VariableScope__Class>(type_info, "System.Linq.Expressions.Interpreter", "LocalVariables", "VariableScope");
        }
        inline app::LocalVariables_VariableScope* create() {
            return il2cpp::create_object<app::LocalVariables_VariableScope>(get_class());
        }
        inline app::LocalVariables_VariableScope__Array* create_array(int size) {
            return il2cpp::array_new<app::LocalVariables_VariableScope__Array>(get_class(), size);
        }
    } // namespace LocalVariables_VariableScope
} // namespace app::classes::types
