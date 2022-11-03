#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::MoonReference_1_MoonAnimation_ {
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (app::MoonReference_1_MoonAnimation_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04781930, MoonReference_1_MoonAnimation__CanResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::MoonAnimation*, Resolve, (app::MoonReference_1_MoonAnimation_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04798948, MoonReference_1_MoonAnimation__Resolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027206E0, void, ctor, (app::MoonReference_1_MoonAnimation_ * this_ptr, app::MoonReference_1_MoonAnimation_* moon_ref))
    IL2CPP_REGISTER_METHODINFO(0x04776458, MoonReference_1_MoonAnimation___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027214E0, bool, TryResolve, (app::MoonReference_1_MoonAnimation_ * this_ptr, app::MoonAnimation** value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x047693B0, MoonReference_1_MoonAnimation__TryResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02720EB0, app::MoonAnimation*, SafeResolve, (app::MoonReference_1_MoonAnimation_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04767FE0, MoonReference_1_MoonAnimation__SafeResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02721960, void, SetStaticValue, (app::MoonReference_1_MoonAnimation_ * this_ptr, app::MoonAnimation* new_value))
    IL2CPP_REGISTER_METHODINFO(0x0476FCA0, MoonReference_1_MoonAnimation__SetStaticValue__MethodInfo)
} // namespace app::classes::Moon::MoonReference_1_MoonAnimation_
