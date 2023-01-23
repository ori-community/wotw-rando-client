#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonReference_1_ITestNotifier_.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/ITestNotifier.h>

namespace app::classes::Moon::MoonReference_1_ITestNotifier_ {
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (app::MoonReference_1_ITestNotifier_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04747F48, MoonReference_1_ITestNotifier__CanResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::ITestNotifier*, Resolve, (app::MoonReference_1_ITestNotifier_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04767548, MoonReference_1_ITestNotifier__Resolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x027205B0, void, ctor, (app::MoonReference_1_ITestNotifier_ * this_ptr, app::ITestNotifier* reference))
    IL2CPP_REGISTER_METHODINFO(0x04701B50, MoonReference_1_ITestNotifier___ctor__MethodInfo)
} // namespace app::classes::Moon::MoonReference_1_ITestNotifier_
