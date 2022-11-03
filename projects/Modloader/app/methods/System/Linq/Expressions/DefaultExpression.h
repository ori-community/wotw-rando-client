#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::DefaultExpression {
    IL2CPP_REGISTER_METHOD(0x01FA9BD0, void, ctor, (app::DefaultExpression * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Type*, get_Type, (app::DefaultExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3CE50, app::ExpressionType__Enum, get_NodeType, (app::DefaultExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FA9C80, app::Expression*, Accept, (app::DefaultExpression * this_ptr, app::ExpressionVisitor* visitor))
} // namespace app::classes::System::Linq::Expressions::DefaultExpression
