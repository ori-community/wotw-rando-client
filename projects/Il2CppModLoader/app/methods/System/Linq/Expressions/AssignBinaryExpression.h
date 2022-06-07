#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::AssignBinaryExpression {
    IL2CPP_REGISTER_METHOD(0x01F9C050, void, ctor, (app::AssignBinaryExpression * this_ptr, app::Expression * left, app::Expression * right))
    IL2CPP_REGISTER_METHOD(0x0182D9B0, app::Type *, get_Type, (app::AssignBinaryExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E16AE0, app::ExpressionType__Enum, get_NodeType, (app::AssignBinaryExpression * this_ptr))
}
