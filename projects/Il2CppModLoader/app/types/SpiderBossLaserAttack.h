#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLaserAttack {
        namespace {
            app::SpiderBossLaserAttack__Class* type_info_ref = nullptr;
        }
        app::SpiderBossLaserAttack__Class** type_info = &type_info_ref;
        inline app::SpiderBossLaserAttack__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLaserAttack__Class>(type_info, "", "SpiderBossLaserAttack");
        }
        inline app::SpiderBossLaserAttack* create() {
            return il2cpp::create_object<app::SpiderBossLaserAttack>(get_class());
        }
    } // namespace SpiderBossLaserAttack
} // namespace app::classes::types
