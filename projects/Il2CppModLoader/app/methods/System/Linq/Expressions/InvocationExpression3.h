#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::InvocationExpression3 {
    IL2CPP_REGISTER_METHOD(0x02416500, void, ctor, (app::InvocationExpression3 * this_ptr, app::Expression* lambda, app::Type* return_type, app::Expression* arg0, app::Expression* arg1, app::Expression* arg2))
    IL2CPP_REGISTER_METHOD(0x022D0730, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_*, GetOrMakeArguments, (app::InvocationExpression3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02416540, app::Expression*, GetArgument, (app::InvocationExpression3 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0475E2B8, InvocationExpression3_GetArgument__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00420230, int32_t, get_ArgumentCount, (app::InvocationExpression3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02416630, app::InvocationExpression*, Rewrite, (app::InvocationExpression3 * this_ptr, app::Expression* lambda, app::Expression__Array* arguments))
} // namespace app::classes::System::Linq::Expressions::InvocationExpression3
