#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BranchLabel.h>
#include <Modloader/app/structs/List_1_System_Linq_Expressions_Interpreter_BranchLabel_.h>
#include <Modloader/app/structs/List_1_T_Enumerator_System_Linq_Expressions_Interpreter_BranchLabel_.h>

namespace app::classes::System::Collections::Generic::List_1_System_Linq_Expressions_Interpreter_BranchLabel_ {
    IL2CPP_REGISTER_METHOD(
        0x025F0B10,
        app::List_1_T_Enumerator_System_Linq_Expressions_Interpreter_BranchLabel_,
        GetEnumerator,
        app::List_1_System_Linq_Expressions_Interpreter_BranchLabel_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_System_Linq_Expressions_Interpreter_BranchLabel_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_System_Linq_Expressions_Interpreter_BranchLabel_* this_ptr, app::BranchLabel* item)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::BranchLabel*, get_Item, app::List_1_System_Linq_Expressions_Interpreter_BranchLabel_* this_ptr, int32_t index)
} // namespace app::classes::System::Collections::Generic::List_1_System_Linq_Expressions_Interpreter_BranchLabel_
