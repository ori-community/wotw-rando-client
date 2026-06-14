#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/LambdaExpression.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Linq::Expressions::ExpressionCreator_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x02543B40,
        app::LambdaExpression*,
        CreateExpressionFunc,
        app::Expression* body,
        app::String* name,
        bool tail_call,
        app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_* parameters
    )
}
