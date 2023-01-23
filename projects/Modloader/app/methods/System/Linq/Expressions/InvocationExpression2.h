#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/InvocationExpression2.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/InvocationExpression.h>
#include <Modloader/app/structs/Expression__Array.h>

namespace app::classes::System::Linq::Expressions::InvocationExpression2 {
    IL2CPP_REGISTER_METHOD(0x024162C0, void, ctor, (app::InvocationExpression2 * this_ptr, app::Expression* lambda, app::Type* return_type, app::Expression* arg0, app::Expression* arg1))
    IL2CPP_REGISTER_METHOD(0x022D0730, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_*, GetOrMakeArguments, (app::InvocationExpression2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024162F0, app::Expression*, GetArgument, (app::InvocationExpression2 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04790448, InvocationExpression2_GetArgument__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ArgumentCount, (app::InvocationExpression2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024163D0, app::InvocationExpression*, Rewrite, (app::InvocationExpression2 * this_ptr, app::Expression* lambda, app::Expression__Array* arguments))
} // namespace app::classes::System::Linq::Expressions::InvocationExpression2
