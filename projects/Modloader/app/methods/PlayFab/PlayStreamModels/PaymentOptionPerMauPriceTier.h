#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PaymentOptionPerMauPriceTier.h>

namespace app::classes::PlayFab::PlayStreamModels::PaymentOptionPerMauPriceTier {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PaymentOptionPerMauPriceTier * this_ptr))
}
