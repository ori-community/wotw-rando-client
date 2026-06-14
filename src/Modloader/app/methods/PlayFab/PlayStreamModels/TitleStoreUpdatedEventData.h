#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TitleStoreUpdatedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::TitleStoreUpdatedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TitleStoreUpdatedEventData* this_ptr)
}
