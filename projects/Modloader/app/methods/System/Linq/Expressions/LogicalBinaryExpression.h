#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/ExpressionType__Enum.h>
#include <Modloader/app/structs/LogicalBinaryExpression.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::LogicalBinaryExpression {
    IL2CPP_REGISTER_METHOD(
        0x02417850,
        void,
        ctor,
        app::LogicalBinaryExpression* this_ptr,
        app::ExpressionType__Enum node_type,
        app::Expression* left,
        app::Expression* right
    )
    IL2CPP_REGISTER_METHOD(0x02417890, app::Type*, get_Type, app::LogicalBinaryExpression* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FD1D0, app::ExpressionType__Enum, get_NodeType, app::LogicalBinaryExpression* this_ptr)
} // namespace app::classes::System::Linq::Expressions::LogicalBinaryExpression
