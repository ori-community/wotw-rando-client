#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::MoonReference_1_Vitals_ {
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (app::MoonReference_1_Vitals_ * this_ptr, app::IMoonResolverContext * context))
    IL2CPP_REGISTER_METHODINFO(0x0478B240, MoonReference_1_Vitals__CanResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::Vitals *, Resolve, (app::MoonReference_1_Vitals_ * this_ptr, app::IMoonResolverContext * context))
    IL2CPP_REGISTER_METHODINFO(0x04735728, MoonReference_1_Vitals__Resolve__MethodInfo)
}
