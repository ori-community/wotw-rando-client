#pragma once
#include <Modloader/app/structs/LaserShieldPieceProjectile__Array.h>
#include <Modloader/app/structs/LaserShieldPieceProjectile__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShieldPieceProjectile__Array {
        inline app::LaserShieldPieceProjectile__Array__Class** type_info() {
            static app::LaserShieldPieceProjectile__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShieldPieceProjectile__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShieldPieceProjectile__Array__Class* get_class() {
            return il2cpp::get_class<app::LaserShieldPieceProjectile__Array__Class>(type_info(), "", "LaserShieldPieceProjectile[]");
        }
        inline app::LaserShieldPieceProjectile__Array* create() {
            return il2cpp::create_object<app::LaserShieldPieceProjectile__Array>(get_class());
        }
    } // namespace LaserShieldPieceProjectile__Array
} // namespace app::classes::types
