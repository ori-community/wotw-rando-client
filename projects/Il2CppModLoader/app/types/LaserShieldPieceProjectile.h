#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LaserShieldPieceProjectile {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LaserShieldPieceProjectile__Class** type_info;
        inline app::LaserShieldPieceProjectile__Class* get_class() {
            return il2cpp::get_class<app::LaserShieldPieceProjectile__Class>(type_info, "", "LaserShieldPieceProjectile");
        }
        inline app::LaserShieldPieceProjectile* create() {
            return il2cpp::create_object<app::LaserShieldPieceProjectile>(get_class());
        }
        inline app::LaserShieldPieceProjectile__Array* create_array(int size) {
            return il2cpp::array_new<app::LaserShieldPieceProjectile__Array>(get_class(), size);
        }
    } // namespace LaserShieldPieceProjectile
} // namespace app::classes::types
