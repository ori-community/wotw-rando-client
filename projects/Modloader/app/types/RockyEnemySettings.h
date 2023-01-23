#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RockyEnemySettings__Class.h>
#include <Modloader/app/structs/RockyEnemySettings.h>

namespace app::classes::types {
    namespace RockyEnemySettings {
        namespace {
            inline app::RockyEnemySettings__Class* type_info_ref = nullptr;
        }
        inline app::RockyEnemySettings__Class** type_info = &type_info_ref;
        inline app::RockyEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemySettings__Class>(type_info, "", "RockyEnemySettings");
        }
        inline app::RockyEnemySettings* create() {
            return il2cpp::create_object<app::RockyEnemySettings>(get_class());
        }
    } // namespace RockyEnemySettings
} // namespace app::classes::types
