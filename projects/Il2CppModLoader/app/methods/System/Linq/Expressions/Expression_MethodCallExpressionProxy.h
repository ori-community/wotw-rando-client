#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::Expression_MethodCallExpressionProxy {
    IL2CPP_REGISTER_METHOD(0x022C71E0, void, ctor, (app::Expression_MethodCallExpressionProxy * this_ptr, app::MethodCallExpression * node))
    IL2CPP_REGISTER_METHOD(0x01717120, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, get_Arguments, (app::Expression_MethodCallExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016D9400, bool, get_CanReduce, (app::Expression_MethodCallExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022C7280, app::String *, get_DebugView, (app::Expression_MethodCallExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01052DF0, app::MethodInfo_1 *, get_Method, (app::Expression_MethodCallExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A887A0, app::ExpressionType__Enum, get_NodeType, (app::Expression_MethodCallExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017170F0, app::Expression *, get_Object, (app::Expression_MethodCallExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A488A0, app::Type *, get_Type, (app::Expression_MethodCallExpressionProxy * this_ptr))
}
