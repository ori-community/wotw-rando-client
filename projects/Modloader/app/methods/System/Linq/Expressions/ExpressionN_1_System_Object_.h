#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExpressionN_1_System_Object_.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/Expression_1_System_Object_.h>
#include <Modloader/app/structs/IReadOnlyList_1_System_Linq_Expressions_ParameterExpression_.h>
#include <Modloader/app/structs/ParameterExpression.h>
#include <Modloader/app/structs/ParameterExpression__Array.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_.h>

namespace app::classes::System::Linq::Expressions::ExpressionN_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02544600, int32_t, get_ParameterCount, (app::ExpressionN_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025432D0, void, ctor, (app::ExpressionN_1_System_Object_ * this_ptr, app::Expression* body, app::IReadOnlyList_1_System_Linq_Expressions_ParameterExpression_* parameters))
    IL2CPP_REGISTER_METHOD(0x02544690, app::ParameterExpression*, GetParameter, (app::ExpressionN_1_System_Object_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02544730, app::ReadOnlyCollection_1_System_Linq_Expressions_ParameterExpression_*, GetOrMakeParameters, (app::ExpressionN_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025447B0, app::Expression_1_System_Object_*, Rewrite, (app::ExpressionN_1_System_Object_ * this_ptr, app::Expression* body, app::ParameterExpression__Array* parameters))
} // namespace app::classes::System::Linq::Expressions::ExpressionN_1_System_Object_
