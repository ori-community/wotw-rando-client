#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RockyEnemyAnimations {
        namespace {
            app::RockyEnemyAnimations__Class* type_info_ref = nullptr;
        }
        app::RockyEnemyAnimations__Class** type_info = &type_info_ref;
        inline app::RockyEnemyAnimations__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyAnimations__Class>(type_info, "", "RockyEnemyAnimations");
        }
        inline app::RockyEnemyAnimations* create() {
            return il2cpp::create_object<app::RockyEnemyAnimations>(get_class());
        }
    } // namespace RockyEnemyAnimations
} // namespace app::classes::types
