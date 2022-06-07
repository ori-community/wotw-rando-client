#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::ConstantExpression {
    IL2CPP_REGISTER_METHOD(0x01FA3760, void, ctor, (app::ConstantExpression * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x01FA3810, app::Type *, get_Type, (app::ConstantExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB4D20, app::ExpressionType__Enum, get_NodeType, (app::ConstantExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object *, get_Value, (app::ConstantExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FA38D0, app::Expression *, Accept, (app::ConstantExpression * this_ptr, app::ExpressionVisitor * visitor))
}
