#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityLanguageUpdatedEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::EntityLanguageUpdatedEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EntityLanguageUpdatedEventData * this_ptr))
}
