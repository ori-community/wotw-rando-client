#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpgradeAbilityItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpgradeAbilityItem__Class** type_info;
        inline app::UpgradeAbilityItem__Class* get_class() {
            return il2cpp::get_class<app::UpgradeAbilityItem__Class>(type_info, "", "UpgradeAbilityItem");
        }
        inline app::UpgradeAbilityItem* create() {
            return il2cpp::create_object<app::UpgradeAbilityItem>(get_class());
        }
        inline app::UpgradeAbilityItem__Array* create_array(int size) {
            return il2cpp::array_new<app::UpgradeAbilityItem__Array>(get_class(), size);
        }
        inline app::UpgradeAbilityItem__Array* create_array(const std::vector<app::UpgradeAbilityItem*>& items) {
            return il2cpp::array_new<app::UpgradeAbilityItem__Array>(get_class(), items);
        }
    } // namespace UpgradeAbilityItem
} // namespace app::classes::types
