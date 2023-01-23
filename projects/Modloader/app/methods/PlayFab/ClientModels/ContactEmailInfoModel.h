#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ContactEmailInfoModel.h>

namespace app::classes::PlayFab::ClientModels::ContactEmailInfoModel {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ContactEmailInfoModel * this_ptr))
}
