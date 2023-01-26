#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InvocationExpression4.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/Expression__Array.h>
#include <Modloader/app/structs/InvocationExpression.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Linq::Expressions::InvocationExpression4 {
    IL2CPP_REGISTER_METHOD(0x024167A0, void, ctor, (app::InvocationExpression4 * this_ptr, app::Expression* lambda, app::Type* return_type, app::Expression* arg0, app::Expression* arg1, app::Expression* arg2, app::Expression* arg3))
    IL2CPP_REGISTER_METHOD(0x022D0730, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_*, GetOrMakeArguments, (app::InvocationExpression4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024167F0, app::Expression*, GetArgument, (app::InvocationExpression4 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00910BD0, int32_t, get_ArgumentCount, (app::InvocationExpression4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024168F0, app::InvocationExpression*, Rewrite, (app::InvocationExpression4 * this_ptr, app::Expression* lambda, app::Expression__Array* arguments))
} // namespace app::classes::System::Linq::Expressions::InvocationExpression4
