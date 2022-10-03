#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::MethodCallExpression4 {
    IL2CPP_REGISTER_METHOD(0x022D0AD0, void, ctor, (app::MethodCallExpression4 * this_ptr, app::MethodInfo_1* method_1, app::Expression* arg0, app::Expression* arg1, app::Expression* arg2, app::Expression* arg3))
    IL2CPP_REGISTER_METHOD(0x02FBC940, app::Expression*, GetArgument, (app::MethodCallExpression4 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04711800, MethodCallExpression4_GetArgument__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00910BD0, int32_t, get_ArgumentCount, (app::MethodCallExpression4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FBC3B0, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_*, GetOrMakeArguments, (app::MethodCallExpression4 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02FBCA40, app::MethodCallExpression*, Rewrite, (app::MethodCallExpression4 * this_ptr, app::Expression* instance, app::IReadOnlyList_1_System_Linq_Expressions_Expression_* args))
} // namespace app::classes::System::Linq::Expressions::MethodCallExpression4
