#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BuildRegionParams.h>

namespace app::classes::PlayFab::MultiplayerModels::BuildRegionParams {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BuildRegionParams * this_ptr))
}
