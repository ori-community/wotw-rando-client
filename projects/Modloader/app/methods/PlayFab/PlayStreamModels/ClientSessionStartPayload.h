#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ClientSessionStartPayload.h>

namespace app::classes::PlayFab::PlayStreamModels::ClientSessionStartPayload {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ClientSessionStartPayload* this_ptr)
}
