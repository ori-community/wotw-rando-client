#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/VirtualCurrencyRechargeTime.h>

namespace app::classes::PlayFab::ClientModels::VirtualCurrencyRechargeTime {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::VirtualCurrencyRechargeTime* this_ptr)
}
