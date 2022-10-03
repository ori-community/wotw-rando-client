#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::InstanceMethodCallExpression2 {
    IL2CPP_REGISTER_METHOD(0x022D0850, void, ctor, (app::InstanceMethodCallExpression2 * this_ptr, app::MethodInfo_1* method_1, app::Expression* instance, app::Expression* arg0, app::Expression* arg1))
    IL2CPP_REGISTER_METHOD(0x022D08A0, app::Expression*, GetArgument, (app::InstanceMethodCallExpression2 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0473BDE0, InstanceMethodCallExpression2_GetArgument__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0043D9E0, int32_t, get_ArgumentCount, (app::InstanceMethodCallExpression2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D0730, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_*, GetOrMakeArguments, (app::InstanceMethodCallExpression2 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D0980, app::MethodCallExpression*, Rewrite, (app::InstanceMethodCallExpression2 * this_ptr, app::Expression* instance, app::IReadOnlyList_1_System_Linq_Expressions_Expression_* args))
} // namespace app::classes::System::Linq::Expressions::InstanceMethodCallExpression2
