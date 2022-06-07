#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::InvocationExpression5 {
    IL2CPP_REGISTER_METHOD(0x02416A90, void, ctor, (app::InvocationExpression5 * this_ptr, app::Expression * lambda, app::Type * return_type, app::Expression * arg0, app::Expression * arg1, app::Expression * arg2, app::Expression * arg3, app::Expression * arg4))
    IL2CPP_REGISTER_METHOD(0x022D0730, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeArguments, (app::InvocationExpression5 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02416AE0, app::Expression *, GetArgument, (app::InvocationExpression5 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04787570, InvocationExpression5_GetArgument__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008E77B0, int32_t, get_ArgumentCount, (app::InvocationExpression5 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02416C00, app::InvocationExpression *, Rewrite, (app::InvocationExpression5 * this_ptr, app::Expression * lambda, app::Expression__Array * arguments))
}
