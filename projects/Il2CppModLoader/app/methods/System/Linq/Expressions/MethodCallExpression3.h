#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::MethodCallExpression3 {
    IL2CPP_REGISTER_METHOD(0x022D0850, void, ctor, (app::MethodCallExpression3 * this_ptr, app::MethodInfo_1 * method_1, app::Expression * arg0, app::Expression * arg1, app::Expression * arg2))
    IL2CPP_REGISTER_METHOD(0x02FBC6F0, app::Expression *, GetArgument, (app::MethodCallExpression3 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047055C8, MethodCallExpression3_GetArgument__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00420230, int32_t, get_ArgumentCount, (app::MethodCallExpression3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FBC3B0, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeArguments, (app::MethodCallExpression3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FBC7E0, app::MethodCallExpression *, Rewrite, (app::MethodCallExpression3 * this_ptr, app::Expression * instance, app::IReadOnlyList_1_System_Linq_Expressions_Expression_ * args))
}
