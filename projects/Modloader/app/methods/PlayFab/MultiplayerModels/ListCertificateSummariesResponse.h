#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ListCertificateSummariesResponse.h>

namespace app::classes::PlayFab::MultiplayerModels::ListCertificateSummariesResponse {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ListCertificateSummariesResponse * this_ptr))
}
