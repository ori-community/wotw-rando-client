#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Linq::Expressions::InstanceMethodCallExpression3 {
    IL2CPP_REGISTER_METHOD(0x022D0AD0, void, ctor, (app::InstanceMethodCallExpression3 * this_ptr, app::MethodInfo_1* method_1, app::Expression* instance, app::Expression* arg0, app::Expression* arg1, app::Expression* arg2))
    IL2CPP_REGISTER_METHOD(0x022D0B20, app::Expression*, GetArgument, (app::InstanceMethodCallExpression3 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04720690, InstanceMethodCallExpression3_GetArgument__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00420230, int32_t, get_ArgumentCount, (app::InstanceMethodCallExpression3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D0730, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_*, GetOrMakeArguments, (app::InstanceMethodCallExpression3 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D0C10, app::MethodCallExpression*, Rewrite, (app::InstanceMethodCallExpression3 * this_ptr, app::Expression* instance, app::IReadOnlyList_1_System_Linq_Expressions_Expression_* args))
} // namespace app::classes::System::Linq::Expressions::InstanceMethodCallExpression3
