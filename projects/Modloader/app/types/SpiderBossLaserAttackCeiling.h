#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderBossLaserAttackCeiling__Class.h>
#include <Modloader/app/structs/SpiderBossLaserAttackCeiling.h>

namespace app::classes::types {
    namespace SpiderBossLaserAttackCeiling {
        namespace {
            inline app::SpiderBossLaserAttackCeiling__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossLaserAttackCeiling__Class** type_info = &type_info_ref;
        inline app::SpiderBossLaserAttackCeiling__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLaserAttackCeiling__Class>(type_info, "", "SpiderBossLaserAttackCeiling");
        }
        inline app::SpiderBossLaserAttackCeiling* create() {
            return il2cpp::create_object<app::SpiderBossLaserAttackCeiling>(get_class());
        }
    } // namespace SpiderBossLaserAttackCeiling
} // namespace app::classes::types
