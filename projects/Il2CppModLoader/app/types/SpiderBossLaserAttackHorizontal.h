#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLaserAttackHorizontal {
        namespace {
            app::SpiderBossLaserAttackHorizontal__Class* type_info_ref = nullptr;
        }
        app::SpiderBossLaserAttackHorizontal__Class** type_info = &type_info_ref;
        inline app::SpiderBossLaserAttackHorizontal__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLaserAttackHorizontal__Class>(type_info, "", "SpiderBossLaserAttackHorizontal");
        }
        inline app::SpiderBossLaserAttackHorizontal* create() {
            return il2cpp::create_object<app::SpiderBossLaserAttackHorizontal>(get_class());
        }
    } // namespace SpiderBossLaserAttackHorizontal
} // namespace app::classes::types
