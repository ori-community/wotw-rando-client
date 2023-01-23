#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayFabResultCommon.h>

namespace app::classes::PlayFab::SharedModels::PlayFabResultCommon {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayFabResultCommon * this_ptr))
}
