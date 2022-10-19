#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShardSlotUpgradePickup {
        inline app::ShardSlotUpgradePickup__Class** type_info = (app::ShardSlotUpgradePickup__Class**)(modloader::win::memory::resolve_rva(0x04713478));
        inline app::ShardSlotUpgradePickup__Class* get_class() {
            return il2cpp::get_class<app::ShardSlotUpgradePickup__Class>(type_info, "", "ShardSlotUpgradePickup");
        }
        inline app::ShardSlotUpgradePickup* create() {
            return il2cpp::create_object<app::ShardSlotUpgradePickup>(get_class());
        }
    } // namespace ShardSlotUpgradePickup
} // namespace app::classes::types
