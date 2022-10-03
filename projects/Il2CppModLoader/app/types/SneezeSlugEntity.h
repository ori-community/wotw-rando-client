#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SneezeSlugEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SneezeSlugEntity__Class** type_info;
        inline app::SneezeSlugEntity__Class* get_class() {
            return il2cpp::get_class<app::SneezeSlugEntity__Class>(type_info, "", "SneezeSlugEntity");
        }
        inline app::SneezeSlugEntity* create() {
            return il2cpp::create_object<app::SneezeSlugEntity>(get_class());
        }
    } // namespace SneezeSlugEntity
} // namespace app::classes::types
