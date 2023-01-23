#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderBossLaserAttackHorizontal__Class.h>
#include <Modloader/app/structs/SpiderBossLaserAttackHorizontal.h>

namespace app::classes::types {
    namespace SpiderBossLaserAttackHorizontal {
        namespace {
            inline app::SpiderBossLaserAttackHorizontal__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossLaserAttackHorizontal__Class** type_info = &type_info_ref;
        inline app::SpiderBossLaserAttackHorizontal__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLaserAttackHorizontal__Class>(type_info, "", "SpiderBossLaserAttackHorizontal");
        }
        inline app::SpiderBossLaserAttackHorizontal* create() {
            return il2cpp::create_object<app::SpiderBossLaserAttackHorizontal>(get_class());
        }
    } // namespace SpiderBossLaserAttackHorizontal
} // namespace app::classes::types
