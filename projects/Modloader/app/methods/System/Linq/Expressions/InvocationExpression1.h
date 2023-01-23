#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/InvocationExpression1.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/InvocationExpression.h>
#include <Modloader/app/structs/Expression__Array.h>

namespace app::classes::System::Linq::Expressions::InvocationExpression1 {
    IL2CPP_REGISTER_METHOD(0x024160D0, void, ctor, (app::InvocationExpression1 * this_ptr, app::Expression* lambda, app::Type* return_type, app::Expression* arg0))
    IL2CPP_REGISTER_METHOD(0x022D0730, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_*, GetOrMakeArguments, (app::InvocationExpression1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02416100, app::Expression*, GetArgument, (app::InvocationExpression1 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047387C0, InvocationExpression1_GetArgument__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_ArgumentCount, (app::InvocationExpression1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024161D0, app::InvocationExpression*, Rewrite, (app::InvocationExpression1 * this_ptr, app::Expression* lambda, app::Expression__Array* arguments))
} // namespace app::classes::System::Linq::Expressions::InvocationExpression1
