#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::MethodCallExpression5 {
    IL2CPP_REGISTER_METHOD(0x02FBCBD0, void, ctor, (app::MethodCallExpression5 * this_ptr, app::MethodInfo_1 * method_1, app::Expression * arg0, app::Expression * arg1, app::Expression * arg2, app::Expression * arg3, app::Expression * arg4))
    IL2CPP_REGISTER_METHOD(0x02FBCC30, app::Expression *, GetArgument, (app::MethodCallExpression5 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04765E70, MethodCallExpression5_GetArgument__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008E77B0, int32_t, get_ArgumentCount, (app::MethodCallExpression5 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FBC3B0, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeArguments, (app::MethodCallExpression5 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FBCD50, app::MethodCallExpression *, Rewrite, (app::MethodCallExpression5 * this_ptr, app::Expression * instance, app::IReadOnlyList_1_System_Linq_Expressions_Expression_ * args))
}
