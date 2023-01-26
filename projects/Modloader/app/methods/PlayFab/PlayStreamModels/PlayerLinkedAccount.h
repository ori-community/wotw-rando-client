#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PlayerLinkedAccount_1.h>

namespace app::classes::PlayFab::PlayStreamModels::PlayerLinkedAccount {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PlayerLinkedAccount_1 * this_ptr))
}
