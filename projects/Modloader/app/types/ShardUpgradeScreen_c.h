#pragma once
#include <Modloader/app/structs/ShardUpgradeScreen_c.h>
#include <Modloader/app/structs/ShardUpgradeScreen_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShardUpgradeScreen_c {
        inline app::ShardUpgradeScreen_c__Class** type_info() {
            static app::ShardUpgradeScreen_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShardUpgradeScreen_c__Class**)(modloader::win::memory::resolve_rva(0x047084B8));
            }
            return cache;
        }
        inline app::ShardUpgradeScreen_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ShardUpgradeScreen_c__Class>(type_info(), "", "ShardUpgradeScreen", "<>c");
        }
        inline app::ShardUpgradeScreen_c* create() {
            return il2cpp::create_object<app::ShardUpgradeScreen_c>(get_class());
        }
    } // namespace ShardUpgradeScreen_c
} // namespace app::classes::types
