#pragma once
#include <Modloader/app/structs/EnemyShield.h>
#include <Modloader/app/structs/EnemyShield__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnemyShield {
        inline app::EnemyShield__Class** type_info() {
            static app::EnemyShield__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnemyShield__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnemyShield__Class* get_class() {
            return il2cpp::get_class<app::EnemyShield__Class>(type_info(), "", "EnemyShield");
        }
        inline app::EnemyShield* create() {
            return il2cpp::create_object<app::EnemyShield>(get_class());
        }
    } // namespace EnemyShield
} // namespace app::classes::types
