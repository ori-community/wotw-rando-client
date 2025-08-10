#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HashSet_1_System_Linq_Expressions_Interpreter_LabelScopeInfo_.h>
#include <Modloader/app/structs/HashSet_1_T_Enumerator_System_Linq_Expressions_Interpreter_LabelScopeInfo_.h>
#include <Modloader/app/structs/LabelScopeInfo.h>

namespace app::classes::System::Collections::Generic::HashSet_1_System_Linq_Expressions_Interpreter_LabelScopeInfo_ {
    IL2CPP_REGISTER_METHOD(0x02ABEAC0, bool, Contains, app::HashSet_1_System_Linq_Expressions_Interpreter_LabelScopeInfo_* this_ptr, app::LabelScopeInfo* item)
    IL2CPP_REGISTER_METHOD(
        0x02ABCD80,
        app::HashSet_1_T_Enumerator_System_Linq_Expressions_Interpreter_LabelScopeInfo_,
        GetEnumerator,
        app::HashSet_1_System_Linq_Expressions_Interpreter_LabelScopeInfo_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor, app::HashSet_1_System_Linq_Expressions_Interpreter_LabelScopeInfo_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, app::HashSet_1_System_Linq_Expressions_Interpreter_LabelScopeInfo_* this_ptr, app::LabelScopeInfo* item)
} // namespace app::classes::System::Collections::Generic::HashSet_1_System_Linq_Expressions_Interpreter_LabelScopeInfo_
