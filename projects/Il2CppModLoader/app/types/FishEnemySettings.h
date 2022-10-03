#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FishEnemySettings {
        namespace {
            app::FishEnemySettings__Class* type_info_ref = nullptr;
        }
        app::FishEnemySettings__Class** type_info = &type_info_ref;
        inline app::FishEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::FishEnemySettings__Class>(type_info, "", "FishEnemySettings");
        }
        inline app::FishEnemySettings* create() {
            return il2cpp::create_object<app::FishEnemySettings>(get_class());
        }
    } // namespace FishEnemySettings
} // namespace app::classes::types
