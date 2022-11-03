#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShardUpgradeScreen_c {
        inline app::ShardUpgradeScreen_c__Class** type_info = (app::ShardUpgradeScreen_c__Class**)(modloader::win::memory::resolve_rva(0x047084B8));
        inline app::ShardUpgradeScreen_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ShardUpgradeScreen_c__Class>(type_info, "", "ShardUpgradeScreen", "<>c");
        }
        inline app::ShardUpgradeScreen_c* create() {
            return il2cpp::create_object<app::ShardUpgradeScreen_c>(get_class());
        }
    } // namespace ShardUpgradeScreen_c
} // namespace app::classes::types
