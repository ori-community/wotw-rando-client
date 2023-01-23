#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetCharacterInventoryResult_.h>
#include <Modloader/app/structs/GetCharacterInventoryResult_1.h>

namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetCharacterInventoryResult_ {
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetCharacterInventoryResult_ * this_ptr, app::GetCharacterInventoryResult_1* result))
    IL2CPP_REGISTER_METHODINFO(0x04707A58, PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetCharacterInventoryResult__Invoke__MethodInfo)
} // namespace app::classes::PlayFab::Events::PlayFabEvents_PlayFabResultEvent_1_PlayFab_ServerModels_GetCharacterInventoryResult_
