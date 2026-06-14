#pragma once
#include <Modloader/app/structs/ShardUpgradeScreen.h>
#include <Modloader/app/structs/ShardUpgradeScreen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShardUpgradeScreen {
        inline app::ShardUpgradeScreen__Class** type_info() {
            static app::ShardUpgradeScreen__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShardUpgradeScreen__Class**)(modloader::win::memory::resolve_rva(0x0472E650));
            }
            return cache;
        }
        inline app::ShardUpgradeScreen__Class* get_class() {
            return il2cpp::get_class<app::ShardUpgradeScreen__Class>(type_info(), "", "ShardUpgradeScreen");
        }
        inline app::ShardUpgradeScreen* create() {
            return il2cpp::create_object<app::ShardUpgradeScreen>(get_class());
        }
    } // namespace ShardUpgradeScreen
} // namespace app::classes::types
