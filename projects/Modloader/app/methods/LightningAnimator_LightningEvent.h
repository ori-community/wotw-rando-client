#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LightningAnimator_LightningEvent__Boxed.h>
#include <Modloader/app/structs/BaseAnimator.h>

namespace app::classes::LightningAnimator_LightningEvent {
    IL2CPP_REGISTER_METHOD(0x00122F20, void, ctor, (app::LightningAnimator_LightningEvent__Boxed * this_ptr, float time, app::BaseAnimator* animator))
}
