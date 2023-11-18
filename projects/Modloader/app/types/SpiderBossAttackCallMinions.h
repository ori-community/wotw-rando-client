#pragma once
#include <Modloader/app/structs/SpiderBossAttackCallMinions.h>
#include <Modloader/app/structs/SpiderBossAttackCallMinions__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossAttackCallMinions {
        inline app::SpiderBossAttackCallMinions__Class** type_info() {
            static app::SpiderBossAttackCallMinions__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossAttackCallMinions__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossAttackCallMinions__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossAttackCallMinions__Class>(type_info(), "", "SpiderBossAttackCallMinions");
        }
        inline app::SpiderBossAttackCallMinions* create() {
            return il2cpp::create_object<app::SpiderBossAttackCallMinions>(get_class());
        }
    } // namespace SpiderBossAttackCallMinions
} // namespace app::classes::types
