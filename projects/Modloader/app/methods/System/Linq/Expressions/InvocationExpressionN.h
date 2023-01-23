#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/InvocationExpressionN.h>
#include <Modloader/app/structs/Expression.h>
#include <Modloader/app/structs/IReadOnlyList_1_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/ReadOnlyCollection_1_System_Linq_Expressions_Expression_.h>
#include <Modloader/app/structs/InvocationExpression.h>
#include <Modloader/app/structs/Expression__Array.h>

namespace app::classes::System::Linq::Expressions::InvocationExpressionN {
    IL2CPP_REGISTER_METHOD(0x02416DD0, void, ctor, (app::InvocationExpressionN * this_ptr, app::Expression* lambda, app::IReadOnlyList_1_System_Linq_Expressions_Expression_* arguments, app::Type* return_type))
    IL2CPP_REGISTER_METHOD(0x02416E00, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_*, GetOrMakeArguments, (app::InvocationExpressionN * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02416E80, app::Expression*, GetArgument, (app::InvocationExpressionN * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02416F20, int32_t, get_ArgumentCount, (app::InvocationExpressionN * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02416FB0, app::InvocationExpression*, Rewrite, (app::InvocationExpressionN * this_ptr, app::Expression* lambda, app::Expression__Array* arguments))
} // namespace app::classes::System::Linq::Expressions::InvocationExpressionN
