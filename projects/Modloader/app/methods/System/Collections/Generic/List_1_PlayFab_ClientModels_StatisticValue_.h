#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/StatisticValue.h>
#include <Modloader/app/structs/List_1_PlayFab_ClientModels_StatisticValue_.h>

namespace app::classes::System::Collections::Generic::List_1_PlayFab_ClientModels_StatisticValue_ {
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::StatisticValue*, get_Item, (app::List_1_PlayFab_ClientModels_StatisticValue_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0476CE18, List_1_PlayFab_ClientModels_StatisticValue__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_PlayFab_ClientModels_StatisticValue_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047057D0, List_1_PlayFab_ClientModels_StatisticValue__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_PlayFab_ClientModels_StatisticValue_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04782CB0, List_1_PlayFab_ClientModels_StatisticValue___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_PlayFab_ClientModels_StatisticValue_ * this_ptr, app::StatisticValue* item))
    IL2CPP_REGISTER_METHODINFO(0x04732B38, List_1_PlayFab_ClientModels_StatisticValue__Add__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_PlayFab_ClientModels_StatisticValue_
