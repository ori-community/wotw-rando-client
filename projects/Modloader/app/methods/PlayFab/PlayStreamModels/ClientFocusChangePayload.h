#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ClientFocusChangePayload.h>

namespace app::classes::PlayFab::PlayStreamModels::ClientFocusChangePayload {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ClientFocusChangePayload* this_ptr)
}
