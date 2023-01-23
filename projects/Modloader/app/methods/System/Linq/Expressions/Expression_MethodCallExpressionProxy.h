#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Expression_MethodCallExpressionProxy.h>
#include <Modloader/app/structs/MethodCallExpression.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/MethodInfo_1.h>
#include <Modloader/app/structs/ExpressionType__Enum.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::Expression_MethodCallExpressionProxy {
    IL2CPP_REGISTER_METHOD(0x022C71E0, void, ctor, (app::Expression_MethodCallExpressionProxy * this_ptr, app::MethodCallExpression* node))
    IL2CPP_REGISTER_METHOD(0x01717120, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_*, get_Arguments, (app::Expression_MethodCallExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016D9400, bool, get_CanReduce, (app::Expression_MethodCallExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022C7280, app::String*, get_DebugView, (app::Expression_MethodCallExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01052DF0, app::MethodInfo_1*, get_Method, (app::Expression_MethodCallExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A887A0, app::ExpressionType__Enum, get_NodeType, (app::Expression_MethodCallExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017170F0, app::Expression*, get_Object, (app::Expression_MethodCallExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A488A0, app::Type*, get_Type, (app::Expression_MethodCallExpressionProxy * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Expression_MethodCallExpressionProxy
