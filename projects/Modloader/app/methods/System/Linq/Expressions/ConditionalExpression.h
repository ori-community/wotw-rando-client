#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ConditionalExpression.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/ExpressionType__Enum.h>
#include <Modloader/app/structs/ExpressionVisitor.h>

namespace app::classes::System::Linq::Expressions::ConditionalExpression {
    IL2CPP_REGISTER_METHOD(0x01FA2E70, void, ctor, (app::ConditionalExpression * this_ptr, app::Expression* test, app::Expression* if_true))
    IL2CPP_REGISTER_METHOD(0x01FA2F20, app::ConditionalExpression*, Make, (app::Expression * test, app::Expression* if_true, app::Expression* if_false, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x0043D9A0, app::ExpressionType__Enum, get_NodeType, (app::ConditionalExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0182D9B0, app::Type*, get_Type, (app::ConditionalExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Expression*, get_Test, (app::ConditionalExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Expression*, get_IfTrue, (app::ConditionalExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D2E60, app::Expression*, get_IfFalse, (app::ConditionalExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FA3340, app::Expression*, GetFalse, (app::ConditionalExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FA33E0, app::Expression*, Accept, (app::ConditionalExpression * this_ptr, app::ExpressionVisitor* visitor))
    IL2CPP_REGISTER_METHOD(0x01FA3410, app::ConditionalExpression*, Update, (app::ConditionalExpression * this_ptr, app::Expression* test, app::Expression* if_true, app::Expression* if_false))
} // namespace app::classes::System::Linq::Expressions::ConditionalExpression
