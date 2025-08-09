#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_System_Linq_Expressions_Interpreter_LocalVariables_VariableScope_.h>
#include <Modloader/app/structs/LocalVariables_VariableScope.h>

namespace app::classes::System::Collections::Generic::List_1_System_Linq_Expressions_Interpreter_LocalVariables_VariableScope_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_System_Linq_Expressions_Interpreter_LocalVariables_VariableScope_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02F1E150,
        void,
        Add,
        app::List_1_System_Linq_Expressions_Interpreter_LocalVariables_VariableScope_* this_ptr,
        app::LocalVariables_VariableScope* item
    )
    IL2CPP_REGISTER_METHOD(
        0x025EFC50,
        app::LocalVariables_VariableScope*,
        get_Item,
        app::List_1_System_Linq_Expressions_Interpreter_LocalVariables_VariableScope_* this_ptr,
        int32_t index
    )
} // namespace app::classes::System::Collections::Generic::List_1_System_Linq_Expressions_Interpreter_LocalVariables_VariableScope_
