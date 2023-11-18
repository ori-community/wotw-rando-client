#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabRequestCommon.h>

namespace app::classes::PlayFab::SharedModels::PlayFabRequestCommon {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayFabRequestCommon * this_ptr))
}
