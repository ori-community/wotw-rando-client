#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeekingProjectile {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeekingProjectile__Class** type_info;
        inline app::SeekingProjectile__Class* get_class() {
            return il2cpp::get_class<app::SeekingProjectile__Class>(type_info, "", "SeekingProjectile");
        }
        inline app::SeekingProjectile* create() {
            return il2cpp::create_object<app::SeekingProjectile>(get_class());
        }
    } // namespace SeekingProjectile
} // namespace app::classes::types
