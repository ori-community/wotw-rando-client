#pragma once
#include <Modloader/app/structs/SpiderBossLaserAttackCeiling.h>
#include <Modloader/app/structs/SpiderBossLaserAttackCeiling__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLaserAttackCeiling {
        inline app::SpiderBossLaserAttackCeiling__Class** type_info() {
            static app::SpiderBossLaserAttackCeiling__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossLaserAttackCeiling__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossLaserAttackCeiling__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLaserAttackCeiling__Class>(type_info(), "", "SpiderBossLaserAttackCeiling");
        }
        inline app::SpiderBossLaserAttackCeiling* create() {
            return il2cpp::create_object<app::SpiderBossLaserAttackCeiling>(get_class());
        }
    } // namespace SpiderBossLaserAttackCeiling
} // namespace app::classes::types
