#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AssignBinaryExpression.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/ExpressionType__Enum.h>

namespace app::classes::System::Linq::Expressions::AssignBinaryExpression {
    IL2CPP_REGISTER_METHOD(0x01F9C050, void, ctor, (app::AssignBinaryExpression * this_ptr, app::Expression* left, app::Expression* right))
    IL2CPP_REGISTER_METHOD(0x0182D9B0, app::Type*, get_Type, (app::AssignBinaryExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E16AE0, app::ExpressionType__Enum, get_NodeType, (app::AssignBinaryExpression * this_ptr))
} // namespace app::classes::System::Linq::Expressions::AssignBinaryExpression
