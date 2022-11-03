#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LegacySwarmEnemyLootSettings {
        namespace {
            inline app::LegacySwarmEnemyLootSettings__Class* type_info_ref = nullptr;
        }
        inline app::LegacySwarmEnemyLootSettings__Class** type_info = &type_info_ref;
        inline app::LegacySwarmEnemyLootSettings__Class* get_class() {
            return il2cpp::get_class<app::LegacySwarmEnemyLootSettings__Class>(type_info, "", "LegacySwarmEnemyLootSettings");
        }
        inline app::LegacySwarmEnemyLootSettings* create() {
            return il2cpp::create_object<app::LegacySwarmEnemyLootSettings>(get_class());
        }
    } // namespace LegacySwarmEnemyLootSettings
} // namespace app::classes::types
