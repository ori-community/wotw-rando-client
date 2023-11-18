#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DeleteCertificateRequest.h>

namespace app::classes::PlayFab::MultiplayerModels::DeleteCertificateRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DeleteCertificateRequest * this_ptr))
}
