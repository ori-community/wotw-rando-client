#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StoreMarketingModel.h>

namespace app::classes::PlayFab::ClientModels::StoreMarketingModel {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::StoreMarketingModel* this_ptr)
}
