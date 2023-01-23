#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonReference_1_ICleverMenuFadeObserver_.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/ICleverMenuFadeObserver.h>

namespace app::classes::Moon::MoonReference_1_ICleverMenuFadeObserver_ {
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (app::MoonReference_1_ICleverMenuFadeObserver_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0474D528, MoonReference_1_ICleverMenuFadeObserver__CanResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::ICleverMenuFadeObserver*, Resolve, (app::MoonReference_1_ICleverMenuFadeObserver_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0472C650, MoonReference_1_ICleverMenuFadeObserver__Resolve__MethodInfo)
} // namespace app::classes::Moon::MoonReference_1_ICleverMenuFadeObserver_
