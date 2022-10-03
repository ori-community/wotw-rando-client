#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RockyEnemySettings {
        namespace {
            app::RockyEnemySettings__Class* type_info_ref = nullptr;
        }
        app::RockyEnemySettings__Class** type_info = &type_info_ref;
        inline app::RockyEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemySettings__Class>(type_info, "", "RockyEnemySettings");
        }
        inline app::RockyEnemySettings* create() {
            return il2cpp::create_object<app::RockyEnemySettings>(get_class());
        }
    } // namespace RockyEnemySettings
} // namespace app::classes::types
