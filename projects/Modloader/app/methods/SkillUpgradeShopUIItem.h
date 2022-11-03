#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SkillUpgradeShopUIItem {
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::UpgradeAbilityItem*, get_UpgradeItem, (app::SkillUpgradeShopUIItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006BBCE0, void, SetItemContext, (app::SkillUpgradeShopUIItem * this_ptr, app::Object* context, app::Object* grid_context))
    IL2CPP_REGISTER_METHOD(0x006BBF00, void, OnItemContextDirty, (app::SkillUpgradeShopUIItem * this_ptr, app::Object* grid_context))
    IL2CPP_REGISTER_METHOD(0x006BC050, void, UpdateIconsFromShard, (app::SkillUpgradeShopUIItem * this_ptr, app::UpgradeAbilityItem* upgrade_item, bool initialize))
    IL2CPP_REGISTER_METHOD(0x006BC060, void, UpdateShard, (app::SkillUpgradeShopUIItem * this_ptr, app::UpgradeAbilityItem* upgrade_item))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SkillUpgradeShopUIItem * this_ptr))
} // namespace app::classes::SkillUpgradeShopUIItem
