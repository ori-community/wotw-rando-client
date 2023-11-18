#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ClientSessionStartEventData.h>

namespace app::classes::PlayFab::PlayStreamModels::ClientSessionStartEventData {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ClientSessionStartEventData * this_ptr))
}
