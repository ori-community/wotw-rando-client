#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::MoonReference_1_MoonTrail_ {
    IL2CPP_REGISTER_METHOD(0x02720EB0, app::MoonTrail *, SafeResolve, (app::MoonReference_1_MoonTrail_ * this_ptr, app::IMoonResolverContext * context))
    IL2CPP_REGISTER_METHODINFO(0x0470C9B0, MoonReference_1_MoonTrail__SafeResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (app::MoonReference_1_MoonTrail_ * this_ptr, app::IMoonResolverContext * context))
    IL2CPP_REGISTER_METHODINFO(0x04765310, MoonReference_1_MoonTrail__CanResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::MoonTrail *, Resolve, (app::MoonReference_1_MoonTrail_ * this_ptr, app::IMoonResolverContext * context))
    IL2CPP_REGISTER_METHODINFO(0x047856B0, MoonReference_1_MoonTrail__Resolve__MethodInfo)
}
