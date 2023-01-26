#pragma once
#include <Modloader/app/structs/SpiderBossLaserAttackHorizontal.h>
#include <Modloader/app/structs/SpiderBossLaserAttackHorizontal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLaserAttackHorizontal {
        inline app::SpiderBossLaserAttackHorizontal__Class** type_info() {
            static app::SpiderBossLaserAttackHorizontal__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossLaserAttackHorizontal__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossLaserAttackHorizontal__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLaserAttackHorizontal__Class>(type_info(), "", "SpiderBossLaserAttackHorizontal");
        }
        inline app::SpiderBossLaserAttackHorizontal* create() {
            return il2cpp::create_object<app::SpiderBossLaserAttackHorizontal>(get_class());
        }
    } // namespace SpiderBossLaserAttackHorizontal
} // namespace app::classes::types
