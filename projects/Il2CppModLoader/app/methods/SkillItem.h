#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SkillItem {
    IL2CPP_REGISTER_METHOD(0x006B4670, int32_t, get_ActualRequiredSkillPoints, (app::SkillItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B4710, app::Color, get_LargeIconColor, (app::SkillItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B4720, void, set_LargeIconColor, (app::SkillItem * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_Visible, (app::SkillItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B4730, bool, get_RequiresAbilitiesOrItems, (app::SkillItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B47E0, bool, get_SoulRequirementMet, (app::SkillItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B48B0, bool, get_AbilitiesRequirementMet, (app::SkillItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B4B90, void, Awake, (app::SkillItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B4C30, bool, get_CanEarnSkill, (app::SkillItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B4C60, void, FixedUpdate, (app::SkillItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B4C70, void, UpdateItem, (app::SkillItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B4EB0, void, OnEnable, (app::SkillItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006B5090, void, ctor, (app::SkillItem * this_ptr))
}
