#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SkillTreeManager {
    IL2CPP_REGISTER_METHOD(0x006B5FF0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x006B6070, bool, get_AllLanesFull, (app::SkillTreeManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B60E0, void, Awake, (app::SkillTreeManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B66D0, void, OnBackPressed, (app::SkillTreeManager * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04704D38, SkillTreeManager_OnBackPressed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0063F120, void, Hide, (app::SkillTreeManager * this_ptr, bool change))
    IL2CPP_REGISTER_METHOD(0x006B6780, void, ShowImmediate, (app::SkillTreeManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0063F190, void, HideImmediate, (app::SkillTreeManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B67C0, void, Show, (app::SkillTreeManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B6800, bool, Condition, (app::CleverMenuItemSelectionManager_NavigationData * navigation_data))
    IL2CPP_REGISTER_METHODINFO(0x0472A640, SkillTreeManager_Condition__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x006B68E0, void, OnDestroy, (app::SkillTreeManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B6CF0, void, OnMenuItemPressed, (app::SkillTreeManager * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470BCE0, SkillTreeManager_OnMenuItemPressed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x006B72F0, app::MessageDescriptor, get_AbilityMastered, (app::SkillTreeManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B73A0, app::MessageProvider*, AbilityName, (app::SkillTreeManager * this_ptr, app::AbilityType__Enum ability))
    IL2CPP_REGISTER_METHOD(0x006B7540, app::String*, RequiredAbilitiesText, (app::SkillTreeManager * this_ptr, app::SkillItem* skill_item))
    IL2CPP_REGISTER_METHOD(0x006B79E0, void, UpdateRequirementsText, (app::SkillTreeManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B7CF0, app::String*, NameText, (app::SkillTreeManager * this_ptr, app::SkillItem* skill_item))
    IL2CPP_REGISTER_METHOD(0x006B7DE0, app::String*, RequiredSoulsText, (app::SkillTreeManager * this_ptr, app::SkillItem* skill_item))
    IL2CPP_REGISTER_METHOD(0x006B8010, void, OnMenuItemChange, (app::SkillTreeManager * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04761408, SkillTreeManager_OnMenuItemChange__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x006B87B0, void, OnPostTimeSlicedEnable, (app::SkillTreeManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SkillTreeManager * this_ptr))
} // namespace app::classes::SkillTreeManager
