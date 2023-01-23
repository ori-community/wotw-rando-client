#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TriggeredActionSequence.h>

namespace app::classes::TriggeredActionSequence {
    IL2CPP_REGISTER_METHOD(0x00B14620, void, Trigger, (app::TriggeredActionSequence * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B146F0, void, ctor, (app::TriggeredActionSequence * this_ptr))
} // namespace app::classes::TriggeredActionSequence
