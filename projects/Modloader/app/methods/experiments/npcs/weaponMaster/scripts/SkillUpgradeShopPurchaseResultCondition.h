#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SkillUpgradeShopPurchaseResultCondition.h>

namespace app::classes::experiments::npcs::weaponMaster::scripts::SkillUpgradeShopPurchaseResultCondition {
    IL2CPP_REGISTER_METHOD(0x00F59B90, bool, Validate, app::SkillUpgradeShopPurchaseResultCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::SkillUpgradeShopPurchaseResultCondition* this_ptr)
} // namespace app::classes::experiments::npcs::weaponMaster::scripts::SkillUpgradeShopPurchaseResultCondition
