#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayerLinkedAccount.h>

namespace app::classes::PlayFab::ServerModels::PlayerLinkedAccount {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerLinkedAccount * this_ptr))
}
