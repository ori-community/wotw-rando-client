#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/ExpressionType__Enum.h>
#include <Modloader/app/structs/ExpressionVisitor.h>
#include <Modloader/app/structs/GotoExpression.h>
#include <Modloader/app/structs/GotoExpressionKind__Enum.h>
#include <Modloader/app/structs/LabelTarget.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::GotoExpression {
    IL2CPP_REGISTER_METHOD(
        0x022CFE50,
        void,
        ctor,
        app::GotoExpression* this_ptr,
        app::GotoExpressionKind__Enum kind,
        app::LabelTarget* target,
        app::Expression* value,
        app::Type* type
    )
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Type*, get_Type, app::GotoExpression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E406F0, app::ExpressionType__Enum, get_NodeType, app::GotoExpression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Expression*, get_Value, app::GotoExpression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::LabelTarget*, get_Target, app::GotoExpression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB970, app::GotoExpressionKind__Enum, get_Kind, app::GotoExpression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x022CFF20, app::Expression*, Accept, app::GotoExpression* this_ptr, app::ExpressionVisitor* visitor)
    IL2CPP_REGISTER_METHOD(0x022CFF50, app::GotoExpression*, Update, app::GotoExpression* this_ptr, app::LabelTarget* target, app::Expression* value)
} // namespace app::classes::System::Linq::Expressions::GotoExpression
