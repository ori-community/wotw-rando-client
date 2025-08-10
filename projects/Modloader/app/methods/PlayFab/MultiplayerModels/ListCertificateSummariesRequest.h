#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListCertificateSummariesRequest.h>

namespace app::classes::PlayFab::MultiplayerModels::ListCertificateSummariesRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ListCertificateSummariesRequest* this_ptr)
}
