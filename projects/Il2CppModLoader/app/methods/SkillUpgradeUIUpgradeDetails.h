#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SkillUpgradeUIUpgradeDetails {
    IL2CPP_REGISTER_METHOD(0x006BCC10, void, Awake, (app::SkillUpgradeUIUpgradeDetails * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00443CC0, void, Show, (app::SkillUpgradeUIUpgradeDetails * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00443C10, void, Hide, (app::SkillUpgradeUIUpgradeDetails * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006BCC20, void, SetItem, (app::SkillUpgradeUIUpgradeDetails * this_ptr, app::UpgradeAbilityItem * item))
    IL2CPP_REGISTER_METHOD(0x006BCDA0, void, UpdateDetails, (app::SkillUpgradeUIUpgradeDetails * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SkillUpgradeUIUpgradeDetails * this_ptr))
}
