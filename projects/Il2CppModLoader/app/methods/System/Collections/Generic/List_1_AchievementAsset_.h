#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Collections::Generic::List_1_AchievementAsset_ {
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_AchievementAsset_ * this_ptr, app::AchievementAsset* item))
    IL2CPP_REGISTER_METHODINFO(0x04762E70, List_1_AchievementAsset__Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_AchievementAsset_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0471B9D8, List_1_AchievementAsset___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_AchievementAsset_ * this_ptr, app::AchievementAsset* item))
    IL2CPP_REGISTER_METHODINFO(0x04706F00, List_1_AchievementAsset__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::AchievementAsset*, get_Item, (app::List_1_AchievementAsset_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04711928, List_1_AchievementAsset__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_AchievementAsset_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04752698, List_1_AchievementAsset__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_AchievementAsset_, GetEnumerator, (app::List_1_AchievementAsset_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475CDB8, List_1_AchievementAsset__GetEnumerator__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_AchievementAsset_
