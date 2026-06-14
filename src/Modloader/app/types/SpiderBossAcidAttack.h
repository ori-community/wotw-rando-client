#pragma once
#include <Modloader/app/structs/SpiderBossAcidAttack.h>
#include <Modloader/app/structs/SpiderBossAcidAttack__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossAcidAttack {
        inline app::SpiderBossAcidAttack__Class** type_info() {
            static app::SpiderBossAcidAttack__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossAcidAttack__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossAcidAttack__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossAcidAttack__Class>(type_info(), "", "SpiderBossAcidAttack");
        }
        inline app::SpiderBossAcidAttack* create() {
            return il2cpp::create_object<app::SpiderBossAcidAttack>(get_class());
        }
    } // namespace SpiderBossAcidAttack
} // namespace app::classes::types
