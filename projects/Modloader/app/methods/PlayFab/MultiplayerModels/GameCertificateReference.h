#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameCertificateReference.h>

namespace app::classes::PlayFab::MultiplayerModels::GameCertificateReference {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GameCertificateReference* this_ptr)
}
