#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::Scope1 {
    IL2CPP_REGISTER_METHOD(0x01F9E3E0, void, ctor_1, (app::Scope1 * this_ptr, app::IReadOnlyList_1_System_Linq_Expressions_ParameterExpression_* variables, app::Expression* body))
    IL2CPP_REGISTER_METHOD(0x01F9E3E0, void, ctor_2, (app::Scope1 * this_ptr, app::IReadOnlyList_1_System_Linq_Expressions_ParameterExpression_* variables, app::Object* body))
    IL2CPP_REGISTER_METHOD(0x02FBF010, app::Expression*, GetExpression, (app::Scope1 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04702EE0, Scope1_GetExpression__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ExpressionCount, (app::Scope1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FBF0C0, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_*, GetOrMakeExpressions, (app::Scope1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FBF0D0, app::BlockExpression*, Rewrite, (app::Scope1 * this_ptr, app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_* variables, app::Expression__Array* args))
} // namespace app::classes::System::Linq::Expressions::Scope1
