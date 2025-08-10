#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ModifyCharacterVirtualCurrencyResult.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFa_ServerModel_ModifyCharacterVirtualCurrencyResul_.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_ModifyCharacterVirtualCurrencyResult_ {
    IL2CPP_REGISTER_METHOD(
        0x00673B90,
        void,
        Invoke,
        app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_ModifyCharacterVirtualCurrencyResult_* this_ptr,
        app::ModifyCharacterVirtualCurrencyResult* result
    )
}
