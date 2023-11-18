#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayFabLoginResultCommon.h>

namespace app::classes::PlayFab::SharedModels::PlayFabLoginResultCommon {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayFabLoginResultCommon * this_ptr))
}
