#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderNpcEntity_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiderNpcEntity_c__Class** type_info;
        inline app::SpiderNpcEntity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderNpcEntity_c__Class>(type_info, "", "SpiderNpcEntity", "<>c");
        }
        inline app::SpiderNpcEntity_c* create() {
            return il2cpp::create_object<app::SpiderNpcEntity_c>(get_class());
        }
    } // namespace SpiderNpcEntity_c
} // namespace app::classes::types
