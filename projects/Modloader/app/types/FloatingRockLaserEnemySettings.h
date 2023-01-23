#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FloatingRockLaserEnemySettings__Class.h>
#include <Modloader/app/structs/FloatingRockLaserEnemySettings.h>

namespace app::classes::types {
    namespace FloatingRockLaserEnemySettings {
        namespace {
            inline app::FloatingRockLaserEnemySettings__Class* type_info_ref = nullptr;
        }
        inline app::FloatingRockLaserEnemySettings__Class** type_info = &type_info_ref;
        inline app::FloatingRockLaserEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::FloatingRockLaserEnemySettings__Class>(type_info, "", "FloatingRockLaserEnemySettings");
        }
        inline app::FloatingRockLaserEnemySettings* create() {
            return il2cpp::create_object<app::FloatingRockLaserEnemySettings>(get_class());
        }
    } // namespace FloatingRockLaserEnemySettings
} // namespace app::classes::types
