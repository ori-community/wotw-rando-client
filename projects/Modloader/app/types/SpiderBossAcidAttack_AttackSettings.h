#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderBossAcidAttack_AttackSettings__Class.h>
#include <Modloader/app/structs/SpiderBossAcidAttack_AttackSettings.h>

namespace app::classes::types {
    namespace SpiderBossAcidAttack_AttackSettings {
        namespace {
            inline app::SpiderBossAcidAttack_AttackSettings__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossAcidAttack_AttackSettings__Class** type_info = &type_info_ref;
        inline app::SpiderBossAcidAttack_AttackSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBossAcidAttack_AttackSettings__Class>(type_info, "", "SpiderBossAcidAttack", "AttackSettings");
        }
        inline app::SpiderBossAcidAttack_AttackSettings* create() {
            return il2cpp::create_object<app::SpiderBossAcidAttack_AttackSettings>(get_class());
        }
    } // namespace SpiderBossAcidAttack_AttackSettings
} // namespace app::classes::types
