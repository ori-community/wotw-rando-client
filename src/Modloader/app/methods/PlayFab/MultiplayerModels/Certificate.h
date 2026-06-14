#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Certificate.h>

namespace app::classes::PlayFab::MultiplayerModels::Certificate {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::Certificate* this_ptr)
}
