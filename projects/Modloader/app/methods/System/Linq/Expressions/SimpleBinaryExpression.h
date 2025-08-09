#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/ExpressionType__Enum.h>
#include <Modloader/app/structs/SimpleBinaryExpression.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::SimpleBinaryExpression {
    IL2CPP_REGISTER_METHOD(
        0x02FBFAE0,
        void,
        ctor,
        app::SimpleBinaryExpression* this_ptr,
        app::ExpressionType__Enum node_type,
        app::Expression* left,
        app::Expression* right,
        app::Type* type
    )
    IL2CPP_REGISTER_METHOD(0x002FD1D0, app::ExpressionType__Enum, get_NodeType, app::SimpleBinaryExpression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::Type*, get_Type, app::SimpleBinaryExpression* this_ptr)
} // namespace app::classes::System::Linq::Expressions::SimpleBinaryExpression
