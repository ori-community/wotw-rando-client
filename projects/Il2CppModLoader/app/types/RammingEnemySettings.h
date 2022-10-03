#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RammingEnemySettings {
        namespace {
            app::RammingEnemySettings__Class* type_info_ref = nullptr;
        }
        app::RammingEnemySettings__Class** type_info = &type_info_ref;
        inline app::RammingEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::RammingEnemySettings__Class>(type_info, "", "RammingEnemySettings");
        }
        inline app::RammingEnemySettings* create() {
            return il2cpp::create_object<app::RammingEnemySettings>(get_class());
        }
    } // namespace RammingEnemySettings
} // namespace app::classes::types
