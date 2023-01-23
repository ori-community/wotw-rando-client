#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DisplayNameFilteredEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::DisplayNameFilteredEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DisplayNameFilteredEventData * this_ptr))
}
