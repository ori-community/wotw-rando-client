#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::InvocationExpression0 {
    IL2CPP_REGISTER_METHOD(0x02415F20, void, ctor, (app::InvocationExpression0 * this_ptr, app::Expression * lambda, app::Type * return_type))
    IL2CPP_REGISTER_METHOD(0x02415F30, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeArguments, (app::InvocationExpression0 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02415FD0, app::Expression *, GetArgument, (app::InvocationExpression0 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04754180, InvocationExpression0_GetArgument__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ArgumentCount, (app::InvocationExpression0 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02416030, app::InvocationExpression *, Rewrite, (app::InvocationExpression0 * this_ptr, app::Expression * lambda, app::Expression__Array * arguments))
}
