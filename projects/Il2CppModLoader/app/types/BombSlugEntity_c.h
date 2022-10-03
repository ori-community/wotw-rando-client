#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BombSlugEntity_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BombSlugEntity_c__Class** type_info;
        inline app::BombSlugEntity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BombSlugEntity_c__Class>(type_info, "", "BombSlugEntity", "<>c");
        }
        inline app::BombSlugEntity_c* create() {
            return il2cpp::create_object<app::BombSlugEntity_c>(get_class());
        }
    } // namespace BombSlugEntity_c
} // namespace app::classes::types
