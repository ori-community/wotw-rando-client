#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ClientFocusChangeEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::ClientFocusChangeEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ClientFocusChangeEventData* this_ptr)
}
