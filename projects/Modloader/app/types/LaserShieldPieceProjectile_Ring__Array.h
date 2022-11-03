#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LaserShieldPieceProjectile_Ring__Array {
        namespace {
            inline app::LaserShieldPieceProjectile_Ring__Array__Class* type_info_ref = nullptr;
        }
        inline app::LaserShieldPieceProjectile_Ring__Array__Class** type_info = &type_info_ref;
        inline app::LaserShieldPieceProjectile_Ring__Array__Class* get_class() {
            return il2cpp::get_class<app::LaserShieldPieceProjectile_Ring__Array__Class>(type_info, "", "LaserShieldPieceProjectile+Ring[]");
        }
        inline app::LaserShieldPieceProjectile_Ring__Array* create() {
            return il2cpp::create_object<app::LaserShieldPieceProjectile_Ring__Array>(get_class());
        }
    } // namespace LaserShieldPieceProjectile_Ring__Array
} // namespace app::classes::types
