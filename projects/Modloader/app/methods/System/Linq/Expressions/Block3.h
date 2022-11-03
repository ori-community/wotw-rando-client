#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Block3 {
    IL2CPP_REGISTER_METHOD(0x01F9E6B0, void, ctor, (app::Block3 * this_ptr, app::Expression* arg0, app::Expression* arg1, app::Expression* arg2))
    IL2CPP_REGISTER_METHOD(0x01F9E700, app::Expression*, GetExpression, (app::Block3 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0473F0F0, Block3_GetExpression__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00420230, int32_t, get_ExpressionCount, (app::Block3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F9E4F0, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_*, GetOrMakeExpressions, (app::Block3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F9E7E0, app::BlockExpression*, Rewrite, (app::Block3 * this_ptr, app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_* variables, app::Expression__Array* args))
} // namespace app::classes::System::Linq::Expressions::Block3
