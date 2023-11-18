#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonReference_1_MoonAnimation_.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/MoonAnimation.h>

namespace app::classes::Moon::MoonReference_1_MoonAnimation_ {
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (app::MoonReference_1_MoonAnimation_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::MoonAnimation*, Resolve, (app::MoonReference_1_MoonAnimation_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x027206E0, void, ctor, (app::MoonReference_1_MoonAnimation_ * this_ptr, app::MoonReference_1_MoonAnimation_* moon_ref))
    IL2CPP_REGISTER_METHOD(0x027214E0, bool, TryResolve, (app::MoonReference_1_MoonAnimation_ * this_ptr, app::MoonAnimation** value, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02720EB0, app::MoonAnimation*, SafeResolve, (app::MoonReference_1_MoonAnimation_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02721960, void, SetStaticValue, (app::MoonReference_1_MoonAnimation_ * this_ptr, app::MoonAnimation* new_value))
} // namespace app::classes::Moon::MoonReference_1_MoonAnimation_
