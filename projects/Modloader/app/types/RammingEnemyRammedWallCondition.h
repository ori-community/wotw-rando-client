#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RammingEnemyRammedWallCondition {
        namespace {
            inline app::RammingEnemyRammedWallCondition__Class* type_info_ref = nullptr;
        }
        inline app::RammingEnemyRammedWallCondition__Class** type_info = &type_info_ref;
        inline app::RammingEnemyRammedWallCondition__Class* get_class() {
            return il2cpp::get_class<app::RammingEnemyRammedWallCondition__Class>(type_info, "", "RammingEnemyRammedWallCondition");
        }
        inline app::RammingEnemyRammedWallCondition* create() {
            return il2cpp::create_object<app::RammingEnemyRammedWallCondition>(get_class());
        }
    } // namespace RammingEnemyRammedWallCondition
} // namespace app::classes::types
