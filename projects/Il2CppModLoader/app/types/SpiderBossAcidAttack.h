#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossAcidAttack {
        namespace {
            app::SpiderBossAcidAttack__Class* type_info_ref = nullptr;
        }
        app::SpiderBossAcidAttack__Class** type_info = &type_info_ref;
        inline app::SpiderBossAcidAttack__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossAcidAttack__Class>(type_info, "", "SpiderBossAcidAttack");
        }
        inline app::SpiderBossAcidAttack* create() {
            return il2cpp::create_object<app::SpiderBossAcidAttack>(get_class());
        }
    } // namespace SpiderBossAcidAttack
} // namespace app::classes::types
