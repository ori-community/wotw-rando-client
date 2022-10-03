#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AcidSlugEnemy_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AcidSlugEnemy_c__Class** type_info;
        inline app::AcidSlugEnemy_c__Class* get_class() {
            return il2cpp::get_nested_class<app::AcidSlugEnemy_c__Class>(type_info, "", "AcidSlugEnemy", "<>c");
        }
        inline app::AcidSlugEnemy_c* create() {
            return il2cpp::create_object<app::AcidSlugEnemy_c>(get_class());
        }
    } // namespace AcidSlugEnemy_c
} // namespace app::classes::types
