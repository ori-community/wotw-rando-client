#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GameCertificateReferenceParams.h>

namespace app::classes::PlayFab::MultiplayerModels::GameCertificateReferenceParams {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::GameCertificateReferenceParams * this_ptr))
}
