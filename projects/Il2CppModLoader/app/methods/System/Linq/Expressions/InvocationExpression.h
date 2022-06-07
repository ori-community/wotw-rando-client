#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::InvocationExpression {
    IL2CPP_REGISTER_METHOD(0x02415D40, void, ctor, (app::InvocationExpression * this_ptr, app::Expression * expression, app::Type * return_type))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Type *, get_Type, (app::InvocationExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007EC3F0, app::ExpressionType__Enum, get_NodeType, (app::InvocationExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Expression *, get_Expression, (app::InvocationExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060EEC0, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, get_Arguments, (app::InvocationExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02415DF0, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeArguments, (app::InvocationExpression * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476EAE0, InvocationExpression_GetOrMakeArguments__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02415E30, app::Expression *, GetArgument, (app::InvocationExpression * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04701CA8, InvocationExpression_GetArgument__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02415E70, int32_t, get_ArgumentCount, (app::InvocationExpression * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04791BA8, InvocationExpression_get_ArgumentCount__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02415EB0, app::Expression *, Accept, (app::InvocationExpression * this_ptr, app::ExpressionVisitor * visitor))
    IL2CPP_REGISTER_METHOD(0x02415EE0, app::InvocationExpression *, Rewrite, (app::InvocationExpression * this_ptr, app::Expression * lambda, app::Expression__Array * arguments))
    IL2CPP_REGISTER_METHODINFO(0x04786758, InvocationExpression_Rewrite__MethodInfo)
}
