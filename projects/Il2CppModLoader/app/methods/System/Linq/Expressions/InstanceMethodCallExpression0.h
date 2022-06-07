#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Linq::Expressions::InstanceMethodCallExpression0 {
    IL2CPP_REGISTER_METHOD(0x022D0440, void, ctor, (app::InstanceMethodCallExpression0 * this_ptr, app::MethodInfo_1 * method_1, app::Expression * instance))
    IL2CPP_REGISTER_METHOD(0x022D0470, app::Expression *, GetArgument, (app::InstanceMethodCallExpression0 * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04759E28, InstanceMethodCallExpression0_GetArgument__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ArgumentCount, (app::InstanceMethodCallExpression0 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D04D0, app::ReadOnlyCollection_1_System_Linq_Expressions_Expression_ *, GetOrMakeArguments, (app::InstanceMethodCallExpression0 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022D0570, app::MethodCallExpression *, Rewrite, (app::InstanceMethodCallExpression0 * this_ptr, app::Expression * instance, app::IReadOnlyList_1_System_Linq_Expressions_Expression_ * args))
}
