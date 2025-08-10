#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/ExpressionVisitor.h>
#include <Modloader/app/structs/Expression_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ParameterExpression__Array.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::Expression_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02544990, app::Type*, get_TypeCore, app::Expression_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02544A40, app::Type*, get_PublicType, app::Expression_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025448E0, void, ctor, app::Expression_1_System_Object_* this_ptr, app::Expression* body)
    IL2CPP_REGISTER_METHOD(0x02544AF0, app::Object*, Compile_1, app::Expression_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02544B20, app::Object*, Compile_2, app::Expression_1_System_Object_* this_ptr, bool prefer_interpretation)
    IL2CPP_REGISTER_METHOD(
        0x02544CF0,
        app::Expression_1_System_Object_*,
        Rewrite,
        app::Expression_1_System_Object_* this_ptr,
        app::Expression* body,
        app::ParameterExpression__Array* parameters
    )
    IL2CPP_REGISTER_METHOD(0x02544D30, app::Expression*, Accept, app::Expression_1_System_Object_* this_ptr, app::ExpressionVisitor* visitor)
} // namespace app::classes::System::Linq::Expressions::Expression_1_System_Object_
