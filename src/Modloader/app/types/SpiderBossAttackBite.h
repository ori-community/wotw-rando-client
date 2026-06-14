#pragma once
#include <Modloader/app/structs/SpiderBossAttackBite.h>
#include <Modloader/app/structs/SpiderBossAttackBite__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossAttackBite {
        inline app::SpiderBossAttackBite__Class** type_info() {
            static app::SpiderBossAttackBite__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossAttackBite__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossAttackBite__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossAttackBite__Class>(type_info(), "", "SpiderBossAttackBite");
        }
        inline app::SpiderBossAttackBite* create() {
            return il2cpp::create_object<app::SpiderBossAttackBite>(get_class());
        }
    } // namespace SpiderBossAttackBite
} // namespace app::classes::types
