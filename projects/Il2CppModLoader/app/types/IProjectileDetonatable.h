#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IProjectileDetonatable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IProjectileDetonatable__Class** type_info;
        inline app::IProjectileDetonatable__Class* get_class() {
            return il2cpp::get_class<app::IProjectileDetonatable__Class>(type_info, "", "IProjectileDetonatable");
        }
        inline app::IProjectileDetonatable* create() {
            return il2cpp::create_object<app::IProjectileDetonatable>(get_class());
        }
    } // namespace IProjectileDetonatable
} // namespace app::classes::types
