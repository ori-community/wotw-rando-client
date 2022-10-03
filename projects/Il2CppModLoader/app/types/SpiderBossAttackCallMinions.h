#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossAttackCallMinions {
        namespace {
            app::SpiderBossAttackCallMinions__Class* type_info_ref = nullptr;
        }
        app::SpiderBossAttackCallMinions__Class** type_info = &type_info_ref;
        inline app::SpiderBossAttackCallMinions__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossAttackCallMinions__Class>(type_info, "", "SpiderBossAttackCallMinions");
        }
        inline app::SpiderBossAttackCallMinions* create() {
            return il2cpp::create_object<app::SpiderBossAttackCallMinions>(get_class());
        }
    } // namespace SpiderBossAttackCallMinions
} // namespace app::classes::types
