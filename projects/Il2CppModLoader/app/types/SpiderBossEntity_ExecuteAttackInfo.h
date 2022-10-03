#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossEntity_ExecuteAttackInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiderBossEntity_ExecuteAttackInfo__Class** type_info;
        inline app::SpiderBossEntity_ExecuteAttackInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBossEntity_ExecuteAttackInfo__Class>(type_info, "", "SpiderBossEntity", "ExecuteAttackInfo");
        }
        inline app::SpiderBossEntity_ExecuteAttackInfo* create() {
            return il2cpp::create_object<app::SpiderBossEntity_ExecuteAttackInfo>(get_class());
        }
        inline app::SpiderBossEntity_ExecuteAttackInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiderBossEntity_ExecuteAttackInfo__Array>(get_class(), size);
        }
    } // namespace SpiderBossEntity_ExecuteAttackInfo
} // namespace app::classes::types
