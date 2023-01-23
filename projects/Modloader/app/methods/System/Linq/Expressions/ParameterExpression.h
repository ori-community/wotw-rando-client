#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ParameterExpression.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/ExpressionType__Enum.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/ExpressionVisitor.h>

namespace app::classes::System::Linq::Expressions::ParameterExpression {
    IL2CPP_REGISTER_METHOD(0x02FBDAA0, void, ctor, (app::ParameterExpression * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x02FBDB50, app::ParameterExpression*, Make, (app::Type * type, app::String* name, bool is_by_ref))
    IL2CPP_REGISTER_METHOD(0x02FBECB0, app::Type*, get_Type, (app::ParameterExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3F7C0, app::ExpressionType__Enum, get_NodeType, (app::ParameterExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Name, (app::ParameterExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D2E60, bool, get_IsByRef, (app::ParameterExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, GetIsByRef, (app::ParameterExpression * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FBED50, app::Expression*, Accept, (app::ParameterExpression * this_ptr, app::ExpressionVisitor* visitor))
} // namespace app::classes::System::Linq::Expressions::ParameterExpression
