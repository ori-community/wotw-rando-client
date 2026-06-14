#pragma once
#include <Modloader/app/structs/LocalVariables_VariableScope__Array.h>
#include <Modloader/app/structs/LocalVariables_VariableScope__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocalVariables_VariableScope__Array {
        inline app::LocalVariables_VariableScope__Array__Class** type_info() {
            static app::LocalVariables_VariableScope__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LocalVariables_VariableScope__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LocalVariables_VariableScope__Array__Class* get_class() {
            return il2cpp::get_class<app::LocalVariables_VariableScope__Array__Class>(type_info(), "System.Linq.Expressions.Interpreter", "LocalVariables+VariableScope[]");
        }
        inline app::LocalVariables_VariableScope__Array* create() {
            return il2cpp::create_object<app::LocalVariables_VariableScope__Array>(get_class());
        }
    } // namespace LocalVariables_VariableScope__Array
} // namespace app::classes::types
