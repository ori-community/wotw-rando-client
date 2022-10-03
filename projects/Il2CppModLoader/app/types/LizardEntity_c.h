#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LizardEntity_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LizardEntity_c__Class** type_info;
        inline app::LizardEntity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LizardEntity_c__Class>(type_info, "", "LizardEntity", "<>c");
        }
        inline app::LizardEntity_c* create() {
            return il2cpp::create_object<app::LizardEntity_c>(get_class());
        }
    } // namespace LizardEntity_c
} // namespace app::classes::types
