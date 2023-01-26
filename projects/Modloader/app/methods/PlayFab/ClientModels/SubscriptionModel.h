#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SubscriptionModel.h>

namespace app::classes::PlayFab::ClientModels::SubscriptionModel {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SubscriptionModel * this_ptr))
}
