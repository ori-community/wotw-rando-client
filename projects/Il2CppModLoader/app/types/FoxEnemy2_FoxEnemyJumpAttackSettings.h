#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FoxEnemy2_FoxEnemyJumpAttackSettings {
        namespace {
            inline app::FoxEnemy2_FoxEnemyJumpAttackSettings__Class* type_info_ref = nullptr;
        }
        inline app::FoxEnemy2_FoxEnemyJumpAttackSettings__Class** type_info = &type_info_ref;
        inline app::FoxEnemy2_FoxEnemyJumpAttackSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::FoxEnemy2_FoxEnemyJumpAttackSettings__Class>(type_info, "", "FoxEnemy2", "FoxEnemyJumpAttackSettings");
        }
        inline app::FoxEnemy2_FoxEnemyJumpAttackSettings* create() {
            return il2cpp::create_object<app::FoxEnemy2_FoxEnemyJumpAttackSettings>(get_class());
        }
    } // namespace FoxEnemy2_FoxEnemyJumpAttackSettings
} // namespace app::classes::types
