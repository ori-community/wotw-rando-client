#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/Expression1_1_System_Object_.h>
#include <Modloader/app/structs/Expression_1_System_Object_.h>
#include <Modloader/app/structs/ParameterExpression.h>
#include <Modloader/app/structs/ParameterExpression__Array.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_.h>

namespace app::classes::System::Linq::Expressions::Expression1_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ParameterCount, app::Expression1_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025432D0, void, ctor, app::Expression1_1_System_Object_* this_ptr, app::Expression* body, app::ParameterExpression* par0)
    IL2CPP_REGISTER_METHOD(0x02543310, app::ParameterExpression*, GetParameter, app::Expression1_1_System_Object_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x025433C0,
        app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_*,
        GetOrMakeParameters,
        app::Expression1_1_System_Object_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x025433D0,
        app::Expression_1_System_Object_*,
        Rewrite,
        app::Expression1_1_System_Object_* this_ptr,
        app::Expression* body,
        app::ParameterExpression__Array* parameters
    )
} // namespace app::classes::System::Linq::Expressions::Expression1_1_System_Object_
