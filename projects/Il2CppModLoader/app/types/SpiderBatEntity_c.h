#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBatEntity_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiderBatEntity_c__Class** type_info;
        inline app::SpiderBatEntity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBatEntity_c__Class>(type_info, "", "SpiderBatEntity", "<>c");
        }
        inline app::SpiderBatEntity_c* create() {
            return il2cpp::create_object<app::SpiderBatEntity_c>(get_class());
        }
    } // namespace SpiderBatEntity_c
} // namespace app::classes::types
