#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LocalVariables_VariableScope__Array__Class.h>
#include <Modloader/app/structs/LocalVariables_VariableScope__Array.h>

namespace app::classes::types {
    namespace LocalVariables_VariableScope__Array {
        namespace {
            inline app::LocalVariables_VariableScope__Array__Class* type_info_ref = nullptr;
        }
        inline app::LocalVariables_VariableScope__Array__Class** type_info = &type_info_ref;
        inline app::LocalVariables_VariableScope__Array__Class* get_class() {
            return il2cpp::get_class<app::LocalVariables_VariableScope__Array__Class>(type_info, "System.Linq.Expressions.Interpreter", "LocalVariables+VariableScope[]");
        }
        inline app::LocalVariables_VariableScope__Array* create() {
            return il2cpp::create_object<app::LocalVariables_VariableScope__Array>(get_class());
        }
    } // namespace LocalVariables_VariableScope__Array
} // namespace app::classes::types
