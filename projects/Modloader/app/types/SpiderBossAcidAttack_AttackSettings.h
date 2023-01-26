#pragma once
#include <Modloader/app/structs/SpiderBossAcidAttack_AttackSettings.h>
#include <Modloader/app/structs/SpiderBossAcidAttack_AttackSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossAcidAttack_AttackSettings {
        inline app::SpiderBossAcidAttack_AttackSettings__Class** type_info() {
            static app::SpiderBossAcidAttack_AttackSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossAcidAttack_AttackSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossAcidAttack_AttackSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBossAcidAttack_AttackSettings__Class>(type_info(), "", "SpiderBossAcidAttack", "AttackSettings");
        }
        inline app::SpiderBossAcidAttack_AttackSettings* create() {
            return il2cpp::create_object<app::SpiderBossAcidAttack_AttackSettings>(get_class());
        }
    } // namespace SpiderBossAcidAttack_AttackSettings
} // namespace app::classes::types
