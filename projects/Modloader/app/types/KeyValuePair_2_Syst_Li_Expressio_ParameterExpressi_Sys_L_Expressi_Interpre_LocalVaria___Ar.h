#pragma once
#include <Modloader/app/structs/KeyValuePair_2_Sys_L_Expressi_ParameterExpress_Sys_L_Expressi_Interpre_LocalVaria___Ar__Cl.h>
#include <Modloader/app/structs/KeyValuePair_2_Syst_Li_Expressio_ParameterExpressi_Sys_L_Expressi_Interpre_LocalVaria___Ar.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyValuePair_2_System_Linq_Expressions_ParameterExpression_System_Linq_Expressions_Interpreter_LocalVariable___Array {
        inline app::KeyValuePair_2_System_Linq_Expressions_ParameterExpression_System_Linq_Expressions_Interpreter_LocalVariable___Array__Class** type_info() {
            static app::KeyValuePair_2_System_Linq_Expressions_ParameterExpression_System_Linq_Expressions_Interpreter_LocalVariable___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KeyValuePair_2_System_Linq_Expressions_ParameterExpression_System_Linq_Expressions_Interpreter_LocalVariable___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KeyValuePair_2_System_Linq_Expressions_ParameterExpression_System_Linq_Expressions_Interpreter_LocalVariable___Array__Class* get_class() {
            return il2cpp::get_class<app::KeyValuePair_2_System_Linq_Expressions_ParameterExpression_System_Linq_Expressions_Interpreter_LocalVariable___Array__Class>(type_info(), "System.Collections.Generic", "KeyValuePair`2[System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable][]");
        }
        inline app::KeyValuePair_2_System_Linq_Expressions_ParameterExpression_System_Linq_Expressions_Interpreter_LocalVariable___Array* create() {
            return il2cpp::create_object<app::KeyValuePair_2_System_Linq_Expressions_ParameterExpression_System_Linq_Expressions_Interpreter_LocalVariable___Array>(get_class());
        }
    } // namespace KeyValuePair_2_System_Linq_Expressions_ParameterExpression_System_Linq_Expressions_Interpreter_LocalVariable___Array
} // namespace app::classes::types
