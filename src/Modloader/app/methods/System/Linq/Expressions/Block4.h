#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Block4.h>
#include <Modloader/app/structs/BlockExpression.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/Expression__Array.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_.h>

namespace app::classes::System::Linq::Expressions::Block4 {
    IL2CPP_REGISTER_METHOD(
        0x01F9E9B0,
        void,
        ctor,
        app::Block4* this_ptr,
        app::Expression* arg0,
        app::Expression* arg1,
        app::Expression* arg2,
        app::Expression* arg3
    )
    IL2CPP_REGISTER_METHOD(0x01F9EA10, app::Expression*, GetExpression, app::Block4* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00910BD0, int32_t, get_ExpressionCount, app::Block4* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F9E4F0, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_*, GetOrMakeExpressions, app::Block4* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01F9EB00,
        app::BlockExpression*,
        Rewrite,
        app::Block4* this_ptr,
        app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_* variables,
        app::Expression__Array* args
    )
} // namespace app::classes::System::Linq::Expressions::Block4
