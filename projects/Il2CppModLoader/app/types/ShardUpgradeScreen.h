#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShardUpgradeScreen {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShardUpgradeScreen__Class** type_info;
        inline app::ShardUpgradeScreen__Class* get_class() {
            return il2cpp::get_class<app::ShardUpgradeScreen__Class>(type_info, "", "ShardUpgradeScreen");
        }
        inline app::ShardUpgradeScreen* create() {
            return il2cpp::create_object<app::ShardUpgradeScreen>(get_class());
        }
    } // namespace ShardUpgradeScreen
} // namespace app::classes::types
