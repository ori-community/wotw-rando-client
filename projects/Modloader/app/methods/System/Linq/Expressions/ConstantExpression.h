#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ConstantExpression.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/ExpressionType__Enum.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/ExpressionVisitor.h>

namespace app::classes::System::Linq::Expressions::ConstantExpression {
    IL2CPP_REGISTER_METHOD(0x01FA3760, void, ctor, (app::ConstantExpression * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x01FA3810, app::Type*, get_Type, (app::ConstantExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AB4D20, app::ExpressionType__Enum, get_NodeType, (app::ConstantExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object*, get_Value, (app::ConstantExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FA38D0, app::Expression*, Accept, (app::ConstantExpression * this_ptr, app::ExpressionVisitor* visitor))
} // namespace app::classes::System::Linq::Expressions::ConstantExpression
