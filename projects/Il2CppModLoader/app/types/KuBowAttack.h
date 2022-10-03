#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KuBowAttack {
        namespace {
            app::KuBowAttack__Class* type_info_ref = nullptr;
        }
        app::KuBowAttack__Class** type_info = &type_info_ref;
        inline app::KuBowAttack__Class* get_class() {
            return il2cpp::get_class<app::KuBowAttack__Class>(type_info, "", "KuBowAttack");
        }
        inline app::KuBowAttack* create() {
            return il2cpp::create_object<app::KuBowAttack>(get_class());
        }
    } // namespace KuBowAttack
} // namespace app::classes::types
