#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HashSet_1_System_Linq_Expressions_ParameterExpression_.h>
#include <Modloader/app/structs/Stack_1_HashSet_1_System_Linq_Expressions_ParameterExpression_.h>

namespace app::classes::System::Collections::Generic::Stack_1_HashSet_1_System_Linq_Expressions_ParameterExpression__ {
    IL2CPP_REGISTER_METHOD(0x0243CB70, void, ctor, app::Stack_1_HashSet_1_System_Linq_Expressions_ParameterExpression_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02CF8030,
        void,
        Push,
        app::Stack_1_HashSet_1_System_Linq_Expressions_ParameterExpression_* this_ptr,
        app::HashSet_1_System_Linq_Expressions_ParameterExpression_* item
    )
    IL2CPP_REGISTER_METHOD(
        0x02CF7F90,
        app::HashSet_1_System_Linq_Expressions_ParameterExpression_*,
        Pop,
        app::Stack_1_HashSet_1_System_Linq_Expressions_ParameterExpression_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::Stack_1_HashSet_1_System_Linq_Expressions_ParameterExpression__
