#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BombSlugEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BombSlugEntity__Class** type_info;
        inline app::BombSlugEntity__Class* get_class() {
            return il2cpp::get_class<app::BombSlugEntity__Class>(type_info, "", "BombSlugEntity");
        }
        inline app::BombSlugEntity* create() {
            return il2cpp::create_object<app::BombSlugEntity>(get_class());
        }
    } // namespace BombSlugEntity
} // namespace app::classes::types
