#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DamageDealer_OverrideInfo.h>

namespace app::classes::DamageDealer_OverrideInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DamageDealer_OverrideInfo* this_ptr)
}
