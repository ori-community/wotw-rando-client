#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacySwarmEnemyPlaceholder {
        namespace {
            inline app::LegacySwarmEnemyPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::LegacySwarmEnemyPlaceholder__Class** type_info = &type_info_ref;
        inline app::LegacySwarmEnemyPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::LegacySwarmEnemyPlaceholder__Class>(type_info, "", "LegacySwarmEnemyPlaceholder");
        }
        inline app::LegacySwarmEnemyPlaceholder* create() {
            return il2cpp::create_object<app::LegacySwarmEnemyPlaceholder>(get_class());
        }
    } // namespace LegacySwarmEnemyPlaceholder
} // namespace app::classes::types
