#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::MoonReference_1_MessageProvider_ {
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (app::MoonReference_1_MessageProvider_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0473F4A0, MoonReference_1_MessageProvider__CanResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::MessageProvider*, Resolve, (app::MoonReference_1_MessageProvider_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x047935B0, MoonReference_1_MessageProvider__Resolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02721960, void, SetStaticValue, (app::MoonReference_1_MessageProvider_ * this_ptr, app::MessageProvider* new_value))
    IL2CPP_REGISTER_METHODINFO(0x04755230, MoonReference_1_MessageProvider__SetStaticValue__MethodInfo)
} // namespace app::classes::Moon::MoonReference_1_MessageProvider_
