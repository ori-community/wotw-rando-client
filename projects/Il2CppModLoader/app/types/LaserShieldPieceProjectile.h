#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LaserShieldPieceProjectile {
        inline app::LaserShieldPieceProjectile__Class** type_info = (app::LaserShieldPieceProjectile__Class**)(modloader::win::memory::resolve_rva(0x04734230));
        inline app::LaserShieldPieceProjectile__Class* get_class() {
            return il2cpp::get_class<app::LaserShieldPieceProjectile__Class>(type_info, "", "LaserShieldPieceProjectile");
        }
        inline app::LaserShieldPieceProjectile* create() {
            return il2cpp::create_object<app::LaserShieldPieceProjectile>(get_class());
        }
        inline app::LaserShieldPieceProjectile__Array* create_array(int size) {
            return il2cpp::array_new<app::LaserShieldPieceProjectile__Array>(get_class(), size);
        }
        inline app::LaserShieldPieceProjectile__Array* create_array(const std::vector<app::LaserShieldPieceProjectile*>& items) {
            return il2cpp::array_new<app::LaserShieldPieceProjectile__Array>(get_class(), items);
        }
    } // namespace LaserShieldPieceProjectile
} // namespace app::classes::types
