#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonReference_1_ICleverMenuFadeObserver_.h>
#include <Modloader/app/structs/ICleverMenuFadeObserver.h>
#include <Modloader/app/structs/IMoonResolverContext.h>

namespace app::classes::Moon::MoonReference_1_ICleverMenuFadeObserver_ {
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (app::MoonReference_1_ICleverMenuFadeObserver_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::ICleverMenuFadeObserver*, Resolve, (app::MoonReference_1_ICleverMenuFadeObserver_ * this_ptr, app::IMoonResolverContext* context))
} // namespace app::classes::Moon::MoonReference_1_ICleverMenuFadeObserver_
