#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::MoonReference_1_IDamageNotifier_ {
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (app::MoonReference_1_IDamageNotifier_ * this_ptr, app::IMoonResolverContext * context))
    IL2CPP_REGISTER_METHODINFO(0x0477B488, MoonReference_1_IDamageNotifier__CanResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::IDamageNotifier *, Resolve, (app::MoonReference_1_IDamageNotifier_ * this_ptr, app::IMoonResolverContext * context))
    IL2CPP_REGISTER_METHODINFO(0x04717340, MoonReference_1_IDamageNotifier__Resolve__MethodInfo)
}
