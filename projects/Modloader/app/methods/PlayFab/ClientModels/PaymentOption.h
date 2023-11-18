#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PaymentOption.h>

namespace app::classes::PlayFab::ClientModels::PaymentOption {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PaymentOption * this_ptr))
}
