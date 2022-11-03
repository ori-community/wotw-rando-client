#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderBossLaserAttack {
        namespace {
            inline app::SpiderBossLaserAttack__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossLaserAttack__Class** type_info = &type_info_ref;
        inline app::SpiderBossLaserAttack__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLaserAttack__Class>(type_info, "", "SpiderBossLaserAttack");
        }
        inline app::SpiderBossLaserAttack* create() {
            return il2cpp::create_object<app::SpiderBossLaserAttack>(get_class());
        }
    } // namespace SpiderBossLaserAttack
} // namespace app::classes::types
