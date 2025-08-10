#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExpressionType__Enum.h>
#include <Modloader/app/structs/NewArrayBoundsExpression.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::NewArrayBoundsExpression {
    IL2CPP_REGISTER_METHOD(
        0x02FBD200,
        void,
        ctor,
        app::NewArrayBoundsExpression* this_ptr,
        app::Type* type,
        app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_* expressions
    )
    IL2CPP_REGISTER_METHOD(0x00E3F100, app::ExpressionType__Enum, get_NodeType, app::NewArrayBoundsExpression* this_ptr)
} // namespace app::classes::System::Linq::Expressions::NewArrayBoundsExpression
