#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::LogicalBinaryExpression {
    IL2CPP_REGISTER_METHOD(0x02417850, void, ctor, (app::LogicalBinaryExpression * this_ptr, app::ExpressionType__Enum node_type, app::Expression * left, app::Expression * right))
    IL2CPP_REGISTER_METHOD(0x02417890, app::Type *, get_Type, (app::LogicalBinaryExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, app::ExpressionType__Enum, get_NodeType, (app::LogicalBinaryExpression * this_ptr))
}
