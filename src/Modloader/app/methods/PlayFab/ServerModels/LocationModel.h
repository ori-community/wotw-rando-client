#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LocationModel_1.h>

namespace app::classes::PlayFab::ServerModels::LocationModel {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LocationModel_1* this_ptr)
}
