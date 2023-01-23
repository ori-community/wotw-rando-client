#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/BlockExpression.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/ExpressionVisitor.h>
#include <Modloader/app/structs/ExpressionType__Enum.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Expression__Array.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Linq::Expressions::BlockExpression {
    IL2CPP_REGISTER_METHOD(0x0060EEC0, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_*, get_Expressions, (app::BlockExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DEBEA0, app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_*, get_Variables, (app::BlockExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F9F080, app::Expression*, get_Result, (app::BlockExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F9F0C0, void, ctor, (app::BlockExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F9F150, app::Expression*, Accept, (app::BlockExpression * this_ptr, app::ExpressionVisitor* visitor))
    IL2CPP_REGISTER_METHOD(0x00E3AD20, app::ExpressionType__Enum, get_NodeType, (app::BlockExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F9F180, app::Type*, get_Type, (app::BlockExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F9F1E0, app::Expression*, GetExpression, (app::BlockExpression * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04749FD8, BlockExpression_GetExpression__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F9F220, int32_t, get_ExpressionCount, (app::BlockExpression * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475F418, BlockExpression_get_ExpressionCount__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F9F260, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_*, GetOrMakeExpressions, (app::BlockExpression * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047798D8, BlockExpression_GetOrMakeExpressions__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F9F2A0, app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_*, GetOrMakeVariables, (app::BlockExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F9F340, app::BlockExpression*, Rewrite, (app::BlockExpression * this_ptr, app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_* variables, app::Expression__Array* args))
    IL2CPP_REGISTER_METHODINFO(0x0475F290, BlockExpression_Rewrite__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01F9F380, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_*, ReturnReadOnlyExpressions, (app::BlockExpression * provider, app::Object** collection))
} // namespace app::classes::System::Linq::Expressions::BlockExpression
