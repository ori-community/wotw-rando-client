#pragma once
#include <Modloader/app/structs/LaserShieldPieceProjectile_Ring__Array.h>
#include <Modloader/app/structs/LaserShieldPieceProjectile_Ring__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShieldPieceProjectile_Ring__Array {
        inline app::LaserShieldPieceProjectile_Ring__Array__Class** type_info() {
            static app::LaserShieldPieceProjectile_Ring__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShieldPieceProjectile_Ring__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShieldPieceProjectile_Ring__Array__Class* get_class() {
            return il2cpp::get_class<app::LaserShieldPieceProjectile_Ring__Array__Class>(type_info(), "", "LaserShieldPieceProjectile+Ring[]");
        }
        inline app::LaserShieldPieceProjectile_Ring__Array* create() {
            return il2cpp::create_object<app::LaserShieldPieceProjectile_Ring__Array>(get_class());
        }
    } // namespace LaserShieldPieceProjectile_Ring__Array
} // namespace app::classes::types
