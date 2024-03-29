#pragma once
#include <Modloader/app/structs/LaserShieldPieceProjectile.h>
#include <Modloader/app/structs/LaserShieldPieceProjectile__Array.h>
#include <Modloader/app/structs/LaserShieldPieceProjectile__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShieldPieceProjectile {
        inline app::LaserShieldPieceProjectile__Class** type_info() {
            static app::LaserShieldPieceProjectile__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LaserShieldPieceProjectile__Class**)(modloader::win::memory::resolve_rva(0x04734230));
            }
            return cache;
        }
        inline app::LaserShieldPieceProjectile__Class* get_class() {
            return il2cpp::get_class<app::LaserShieldPieceProjectile__Class>(type_info(), "", "LaserShieldPieceProjectile");
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
