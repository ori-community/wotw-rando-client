#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ListCertificateSummariesRequest.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabRequestEven_1_PlayFa_MultiplayerModel_ListCertificateSummariesReques_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_ListCertificateSummariesRequest_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabRequestEvent_1_PlayFab_MultiplayerModels_ListCertificateSummariesRequest_* this_ptr,
        app::ListCertificateSummariesRequest* request
    )
}
