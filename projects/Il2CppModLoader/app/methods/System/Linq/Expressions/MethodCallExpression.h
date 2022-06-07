#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::MethodCallExpression {
    IL2CPP_REGISTER_METHOD(0x02FBBF50, void, ctor, (app::MethodCallExpression * this_ptr, app::MethodInfo_1 * method_1))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::Expression *, GetInstance, (app::MethodCallExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D89A0, app::ExpressionType__Enum, get_NodeType, (app::MethodCallExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016FBBA0, app::Type *, get_Type, (app::MethodCallExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::MethodInfo_1 *, get_Method, (app::MethodCallExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0060EEC0, app::Expression *, get_Object, (app::MethodCallExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DEBEA0, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, get_Arguments, (app::MethodCallExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FBC000, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeArguments, (app::MethodCallExpression * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475D420, MethodCallExpression_GetOrMakeArguments__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FBC040, app::Expression *, Accept, (app::MethodCallExpression * this_ptr, app::ExpressionVisitor * visitor))
    IL2CPP_REGISTER_METHOD(0x02FBC070, app::MethodCallExpression *, Rewrite, (app::MethodCallExpression * this_ptr, app::Expression * instance, app::IReadOnlyList_1_System_Linq_Expressions_Expression_ * args))
    IL2CPP_REGISTER_METHODINFO(0x04770228, MethodCallExpression_Rewrite__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FBC0B0, app::Expression *, GetArgument, (app::MethodCallExpression * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0474CF78, MethodCallExpression_GetArgument__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FBC0F0, int32_t, get_ArgumentCount, (app::MethodCallExpression * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04717008, MethodCallExpression_get_ArgumentCount__MethodInfo)
}
