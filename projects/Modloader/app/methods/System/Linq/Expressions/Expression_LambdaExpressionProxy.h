#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Expression_LambdaExpressionProxy.h>
#include <Modloader/app/structs/LambdaExpression.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ExpressionType__Enum.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::Expression_LambdaExpressionProxy {
    IL2CPP_REGISTER_METHOD(0x029D4F50, void, ctor, (app::Expression_LambdaExpressionProxy * this_ptr, app::LambdaExpression* node))
    IL2CPP_REGISTER_METHOD(0x01052DF0, app::Expression*, get_Body, (app::Expression_LambdaExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016D9400, bool, get_CanReduce, (app::Expression_LambdaExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022C7280, app::String*, get_DebugView, (app::Expression_LambdaExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717150, app::String*, get_Name, (app::Expression_LambdaExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A887A0, app::ExpressionType__Enum, get_NodeType, (app::Expression_LambdaExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017171B0, app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_*, get_Parameters, (app::Expression_LambdaExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029D4FF0, app::Type*, get_ReturnType, (app::Expression_LambdaExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01717180, bool, get_TailCall, (app::Expression_LambdaExpressionProxy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A488A0, app::Type*, get_Type, (app::Expression_LambdaExpressionProxy * this_ptr))
} // namespace app::classes::System::Linq::Expressions::Expression_LambdaExpressionProxy
