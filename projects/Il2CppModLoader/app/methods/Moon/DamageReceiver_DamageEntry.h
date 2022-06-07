#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::DamageReceiver_DamageEntry {
    IL2CPP_REGISTER_METHOD(0x01200C90, bool, get_WillBeProcessedThisFrame, (app::DamageReceiver_DamageEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DamageReceiver_DamageEntry * this_ptr))
}
