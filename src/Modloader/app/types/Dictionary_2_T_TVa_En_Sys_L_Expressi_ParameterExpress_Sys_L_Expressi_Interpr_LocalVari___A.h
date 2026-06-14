#pragma once
#include <Modloader/app/structs/Dictionary_2_T_TVa_En_Sys_L_Expressi_ParameterExpres_Sy_L_Express_Interpr_LocalVari___A__C.h>
#include <Modloader/app/structs/Dictionary_2_T_TVa_En_Sys_L_Expressi_ParameterExpress_Sys_L_Expressi_Interpr_LocalVari___A.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dictionary_2_TKey_TValue_Entry_System_Linq_Expressions_ParameterExpression_System_Linq_Expressions_Interpreter_LocalVariable___Array {
        inline app::Dictionary_2_TKey_TValue_Entry_System_Linq_Expressions_ParameterExpression_System_Linq_Expressions_Interpreter_LocalVariable___Array__Class** type_info() {
            static app::Dictionary_2_TKey_TValue_Entry_System_Linq_Expressions_ParameterExpression_System_Linq_Expressions_Interpreter_LocalVariable___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Dictionary_2_TKey_TValue_Entry_System_Linq_Expressions_ParameterExpression_System_Linq_Expressions_Interpreter_LocalVariable___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Dictionary_2_TKey_TValue_Entry_System_Linq_Expressions_ParameterExpression_System_Linq_Expressions_Interpreter_LocalVariable___Array__Class* get_class() {
            return il2cpp::get_class<app::Dictionary_2_TKey_TValue_Entry_System_Linq_Expressions_ParameterExpression_System_Linq_Expressions_Interpreter_LocalVariable___Array__Class>(type_info(), "System.Collections.Generic", "Dictionary`2[TKey,TValue]+Entry[System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable][]");
        }
        inline app::Dictionary_2_TKey_TValue_Entry_System_Linq_Expressions_ParameterExpression_System_Linq_Expressions_Interpreter_LocalVariable___Array* create() {
            return il2cpp::create_object<app::Dictionary_2_TKey_TValue_Entry_System_Linq_Expressions_ParameterExpression_System_Linq_Expressions_Interpreter_LocalVariable___Array>(get_class());
        }
    } // namespace Dictionary_2_TKey_TValue_Entry_System_Linq_Expressions_ParameterExpression_System_Linq_Expressions_Interpreter_LocalVariable___Array
} // namespace app::classes::types
