#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnemyShield {
        namespace {
            app::EnemyShield__Class* type_info_ref = nullptr;
        }
        app::EnemyShield__Class** type_info = &type_info_ref;
        inline app::EnemyShield__Class* get_class() {
            return il2cpp::get_class<app::EnemyShield__Class>(type_info, "", "EnemyShield");
        }
        inline app::EnemyShield* create() {
            return il2cpp::create_object<app::EnemyShield>(get_class());
        }
    } // namespace EnemyShield
} // namespace app::classes::types
