#pragma once
#include <Modloader/app/structs/KuBowAttack.h>
#include <Modloader/app/structs/KuBowAttack__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KuBowAttack {
        inline app::KuBowAttack__Class** type_info() {
            static app::KuBowAttack__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KuBowAttack__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KuBowAttack__Class* get_class() {
            return il2cpp::get_class<app::KuBowAttack__Class>(type_info(), "", "KuBowAttack");
        }
        inline app::KuBowAttack* create() {
            return il2cpp::create_object<app::KuBowAttack>(get_class());
        }
    } // namespace KuBowAttack
} // namespace app::classes::types
