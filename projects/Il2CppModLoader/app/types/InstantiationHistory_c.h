#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InstantiationHistory_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InstantiationHistory_c__Class** type_info;
        inline app::InstantiationHistory_c__Class* get_class() {
            return il2cpp::get_nested_class<app::InstantiationHistory_c__Class>(type_info, "", "InstantiationHistory", "<>c");
        }
        inline app::InstantiationHistory_c* create() {
            return il2cpp::create_object<app::InstantiationHistory_c>(get_class());
        }
    } // namespace InstantiationHistory_c
} // namespace app::classes::types
