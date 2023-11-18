#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TitleAddedGameBuildEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::TitleAddedGameBuildEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TitleAddedGameBuildEventData * this_ptr))
}
