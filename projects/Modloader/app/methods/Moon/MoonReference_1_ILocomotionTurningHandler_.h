#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonReference_1_ILocomotionTurningHandler_.h>
#include <Modloader/app/structs/ILocomotionTurningHandler.h>
#include <Modloader/app/structs/IMoonResolverContext.h>

namespace app::classes::Moon::MoonReference_1_ILocomotionTurningHandler_ {
    IL2CPP_REGISTER_METHOD(0x027205B0, void, ctor, (app::MoonReference_1_ILocomotionTurningHandler_ * this_ptr, app::ILocomotionTurningHandler* reference))
    IL2CPP_REGISTER_METHOD(0x02720EB0, app::ILocomotionTurningHandler*, SafeResolve, (app::MoonReference_1_ILocomotionTurningHandler_ * this_ptr, app::IMoonResolverContext* context))
} // namespace app::classes::Moon::MoonReference_1_ILocomotionTurningHandler_
