#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageReceiver_OverrideInfo.h>

namespace app::classes::Moon::DamageReceiver_OverrideInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DamageReceiver_OverrideInfo* this_ptr)
}
