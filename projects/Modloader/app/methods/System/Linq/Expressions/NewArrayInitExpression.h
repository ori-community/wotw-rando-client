#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExpressionType__Enum.h>
#include <Modloader/app/structs/NewArrayInitExpression.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::NewArrayInitExpression {
    IL2CPP_REGISTER_METHOD(
        0x02FBD200,
        void,
        ctor,
        app::NewArrayInitExpression* this_ptr,
        app::Type* type,
        app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_* expressions
    )
    IL2CPP_REGISTER_METHOD(0x00E3EE80, app::ExpressionType__Enum, get_NodeType, app::NewArrayInitExpression* this_ptr)
} // namespace app::classes::System::Linq::Expressions::NewArrayInitExpression
