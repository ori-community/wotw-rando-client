#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MasterPlayerTitleDeletedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::MasterPlayerTitleDeletedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MasterPlayerTitleDeletedEventData * this_ptr))
}
