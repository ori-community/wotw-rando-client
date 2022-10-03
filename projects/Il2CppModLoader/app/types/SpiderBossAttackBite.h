#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossAttackBite {
        namespace {
            app::SpiderBossAttackBite__Class* type_info_ref = nullptr;
        }
        app::SpiderBossAttackBite__Class** type_info = &type_info_ref;
        inline app::SpiderBossAttackBite__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossAttackBite__Class>(type_info, "", "SpiderBossAttackBite");
        }
        inline app::SpiderBossAttackBite* create() {
            return il2cpp::create_object<app::SpiderBossAttackBite>(get_class());
        }
    } // namespace SpiderBossAttackBite
} // namespace app::classes::types
