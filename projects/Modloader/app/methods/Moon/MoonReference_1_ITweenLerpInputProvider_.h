#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonReference_1_ITweenLerpInputProvider_.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/ITweenLerpInputProvider.h>

namespace app::classes::Moon::MoonReference_1_ITweenLerpInputProvider_ {
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (app::MoonReference_1_ITweenLerpInputProvider_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::ITweenLerpInputProvider*, Resolve, (app::MoonReference_1_ITweenLerpInputProvider_ * this_ptr, app::IMoonResolverContext* context))
} // namespace app::classes::Moon::MoonReference_1_ITweenLerpInputProvider_
