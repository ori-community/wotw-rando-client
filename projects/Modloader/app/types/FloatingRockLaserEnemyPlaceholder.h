#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FloatingRockLaserEnemyPlaceholder {
        namespace {
            inline app::FloatingRockLaserEnemyPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::FloatingRockLaserEnemyPlaceholder__Class** type_info = &type_info_ref;
        inline app::FloatingRockLaserEnemyPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::FloatingRockLaserEnemyPlaceholder__Class>(type_info, "", "FloatingRockLaserEnemyPlaceholder");
        }
        inline app::FloatingRockLaserEnemyPlaceholder* create() {
            return il2cpp::create_object<app::FloatingRockLaserEnemyPlaceholder>(get_class());
        }
    } // namespace FloatingRockLaserEnemyPlaceholder
} // namespace app::classes::types
