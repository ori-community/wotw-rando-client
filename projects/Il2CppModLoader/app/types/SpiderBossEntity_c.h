#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossEntity_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiderBossEntity_c__Class** type_info;
        inline app::SpiderBossEntity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBossEntity_c__Class>(type_info, "", "SpiderBossEntity", "<>c");
        }
        inline app::SpiderBossEntity_c* create() {
            return il2cpp::create_object<app::SpiderBossEntity_c>(get_class());
        }
    } // namespace SpiderBossEntity_c
} // namespace app::classes::types
