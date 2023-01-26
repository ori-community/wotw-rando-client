#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/FullExpression_1_System_Object_.h>
#include <Modloader/app/structs/IReadOnlyList_1_System_Linq_Expressions_ParameterExpression_.h>

namespace app::classes::System::Linq::Expressions::FullExpression_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x002FB950, app::String*, get_NameCore, (app::FullExpression_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_TailCallCore, (app::FullExpression_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02544D90, void, ctor, (app::FullExpression_1_System_Object_ * this_ptr, app::Expression* body, app::String* name, bool tail_call, app::IReadOnlyList_1_System_Linq_Expressions_ParameterExpression_* parameters))
} // namespace app::classes::System::Linq::Expressions::FullExpression_1_System_Object_
