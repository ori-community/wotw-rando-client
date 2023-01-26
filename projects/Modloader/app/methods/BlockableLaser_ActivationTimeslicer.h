#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BlockableLaser_ActivationTimeslicer.h>
#include <Modloader/app/structs/BlockableLaser.h>

namespace app::classes::BlockableLaser_ActivationTimeslicer {
    IL2CPP_REGISTER_METHOD(0x00D345C0, void, QueueActivation, (app::BlockableLaser_ActivationTimeslicer * this_ptr, app::BlockableLaser* laser))
    IL2CPP_REGISTER_METHOD(0x00D346D0, void, QueueDeactivation, (app::BlockableLaser_ActivationTimeslicer * this_ptr, app::BlockableLaser* laser))
    IL2CPP_REGISTER_METHOD(0x00D347E0, void, Update, (app::BlockableLaser_ActivationTimeslicer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D34970, void, ctor, (app::BlockableLaser_ActivationTimeslicer * this_ptr))
} // namespace app::classes::BlockableLaser_ActivationTimeslicer
