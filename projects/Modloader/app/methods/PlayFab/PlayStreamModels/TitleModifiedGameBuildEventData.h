#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TitleModifiedGameBuildEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::TitleModifiedGameBuildEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TitleModifiedGameBuildEventData * this_ptr))
}
