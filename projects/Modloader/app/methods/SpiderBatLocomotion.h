#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpiderBatLocomotion.h>

namespace app::classes::SpiderBatLocomotion {
    IL2CPP_REGISTER_METHOD(0x0095C820, void, SetAttacking, (app::SpiderBatLocomotion * this_ptr, bool on))
    IL2CPP_REGISTER_METHOD(0x004F1990, void, ctor, (app::SpiderBatLocomotion * this_ptr))
} // namespace app::classes::SpiderBatLocomotion
