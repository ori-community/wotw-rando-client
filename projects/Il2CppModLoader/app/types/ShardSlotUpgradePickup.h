#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShardSlotUpgradePickup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShardSlotUpgradePickup__Class** type_info;
        inline app::ShardSlotUpgradePickup__Class* get_class() {
            return il2cpp::get_class<app::ShardSlotUpgradePickup__Class>(type_info, "", "ShardSlotUpgradePickup");
        }
        inline app::ShardSlotUpgradePickup* create() {
            return il2cpp::create_object<app::ShardSlotUpgradePickup>(get_class());
        }
    } // namespace ShardSlotUpgradePickup
} // namespace app::classes::types
