#pragma once
#include <Modloader/app/structs/SpiderBossLaserAttack.h>
#include <Modloader/app/structs/SpiderBossLaserAttack__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLaserAttack {
        inline app::SpiderBossLaserAttack__Class** type_info() {
            static app::SpiderBossLaserAttack__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossLaserAttack__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossLaserAttack__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLaserAttack__Class>(type_info(), "", "SpiderBossLaserAttack");
        }
        inline app::SpiderBossLaserAttack* create() {
            return il2cpp::create_object<app::SpiderBossLaserAttack>(get_class());
        }
    } // namespace SpiderBossLaserAttack
} // namespace app::classes::types
