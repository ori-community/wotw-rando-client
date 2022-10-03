#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AcidSlugEnemy_States {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AcidSlugEnemy_States__Class** type_info;
        inline app::AcidSlugEnemy_States__Class* get_class() {
            return il2cpp::get_nested_class<app::AcidSlugEnemy_States__Class>(type_info, "", "AcidSlugEnemy", "States");
        }
        inline app::AcidSlugEnemy_States* create() {
            return il2cpp::create_object<app::AcidSlugEnemy_States>(get_class());
        }
    } // namespace AcidSlugEnemy_States
} // namespace app::classes::types
