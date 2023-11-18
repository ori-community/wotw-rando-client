#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ContactSwitchSequencer.h>

namespace app::classes::ContactSwitchSequencer {
    IL2CPP_REGISTER_METHOD(0x011E75E0, void, Update, (app::ContactSwitchSequencer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ContactSwitchSequencer * this_ptr))
} // namespace app::classes::ContactSwitchSequencer
