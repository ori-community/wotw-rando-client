#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UpgradeAbilityItem {
        inline app::UpgradeAbilityItem__Class** type_info = (app::UpgradeAbilityItem__Class**)(modloader::win::memory::resolve_rva(0x0476A540));
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
