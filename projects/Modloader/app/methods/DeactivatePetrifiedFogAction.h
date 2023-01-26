#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DeactivatePetrifiedFogAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::DeactivatePetrifiedFogAction {
    IL2CPP_REGISTER_METHOD(0x00DD66D0, void, Perform, (app::DeactivatePetrifiedFogAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::DeactivatePetrifiedFogAction * this_ptr))
} // namespace app::classes::DeactivatePetrifiedFogAction
