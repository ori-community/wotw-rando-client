#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FloatingRockTurrentEnemySettings__Class.h>
#include <Modloader/app/structs/FloatingRockTurrentEnemySettings.h>

namespace app::classes::types {
    namespace FloatingRockTurrentEnemySettings {
        namespace {
            inline app::FloatingRockTurrentEnemySettings__Class* type_info_ref = nullptr;
        }
        inline app::FloatingRockTurrentEnemySettings__Class** type_info = &type_info_ref;
        inline app::FloatingRockTurrentEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::FloatingRockTurrentEnemySettings__Class>(type_info, "", "FloatingRockTurrentEnemySettings");
        }
        inline app::FloatingRockTurrentEnemySettings* create() {
            return il2cpp::create_object<app::FloatingRockTurrentEnemySettings>(get_class());
        }
    } // namespace FloatingRockTurrentEnemySettings
} // namespace app::classes::types
