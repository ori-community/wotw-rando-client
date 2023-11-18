#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TypeBinaryExpression.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/ExpressionType__Enum.h>
#include <Modloader/app/structs/ExpressionVisitor.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::TypeBinaryExpression {
    IL2CPP_REGISTER_METHOD(0x02FC5520, void, ctor, (app::TypeBinaryExpression * this_ptr, app::Expression* expression, app::Type* type_operand, app::ExpressionType__Enum node_type))
    IL2CPP_REGISTER_METHOD(0x02FC55E0, app::Type*, get_Type, (app::TypeBinaryExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::ExpressionType__Enum, get_NodeType, (app::TypeBinaryExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Expression*, get_Expression, (app::TypeBinaryExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Type*, get_TypeOperand, (app::TypeBinaryExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FC5680, app::Expression*, Accept, (app::TypeBinaryExpression * this_ptr, app::ExpressionVisitor* visitor))
    IL2CPP_REGISTER_METHOD(0x02FC56B0, app::TypeBinaryExpression*, Update, (app::TypeBinaryExpression * this_ptr, app::Expression* expression))
} // namespace app::classes::System::Linq::Expressions::TypeBinaryExpression
