#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonReference_1_MovingPlatformController_.h>
#include <Modloader/app/structs/IMoonResolverContext.h>
#include <Modloader/app/structs/MovingPlatformController.h>

namespace app::classes::Moon::MoonReference_1_MovingPlatformController_ {
    IL2CPP_REGISTER_METHOD(0x027216E0, bool, CanResolve, (app::MoonReference_1_MovingPlatformController_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x04719B20, MoonReference_1_MovingPlatformController__CanResolve__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02720AC0, app::MovingPlatformController*, Resolve, (app::MoonReference_1_MovingPlatformController_ * this_ptr, app::IMoonResolverContext* context))
    IL2CPP_REGISTER_METHODINFO(0x0474FAB8, MoonReference_1_MovingPlatformController__Resolve__MethodInfo)
} // namespace app::classes::Moon::MoonReference_1_MovingPlatformController_
