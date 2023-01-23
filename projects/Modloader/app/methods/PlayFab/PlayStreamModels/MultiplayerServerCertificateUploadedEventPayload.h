#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MultiplayerServerCertificateUploadedEventPayload.h>

namespace app::classes::PlayFab::PlayStreamModels::MultiplayerServerCertificateUploadedEventPayload {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MultiplayerServerCertificateUploadedEventPayload * this_ptr))
}
