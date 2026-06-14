#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SkillUpgradeShopUISubItem.h>
#include <Modloader/app/structs/UpgradeAbilityItem.h>

namespace app::classes::SkillUpgradeShopUISubItem {
    IL2CPP_REGISTER_METHOD(0x006BC4D0, void, Update, app::SkillUpgradeShopUISubItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006BC4E0, void, SetItemContext, app::SkillUpgradeShopUISubItem* this_ptr, app::Object* context, app::Object* grid_context)
    IL2CPP_REGISTER_METHOD(0x006BC4D0, void, OnItemContextDirty, app::SkillUpgradeShopUISubItem* this_ptr, app::Object* grid_context)
    IL2CPP_REGISTER_METHOD(
        0x006BC5C0,
        void,
        SetUpgradeItem,
        app::SkillUpgradeShopUISubItem* this_ptr,
        app::UpgradeAbilityItem* upgrade_item,
        app::Object* grid_context
    )
    IL2CPP_REGISTER_METHOD(0x006BC6B0, void, UpdateUpgradeIcon, app::SkillUpgradeShopUISubItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006BC4D0, void, UpdateUpgradeItemProperties, app::SkillUpgradeShopUISubItem* this_ptr, app::Object* grid_context, bool initialize)
    IL2CPP_REGISTER_METHOD(0x006BC790, void, UpdateUpgradeItem, app::SkillUpgradeShopUISubItem* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::SkillUpgradeShopUISubItem* this_ptr)
} // namespace app::classes::SkillUpgradeShopUISubItem
