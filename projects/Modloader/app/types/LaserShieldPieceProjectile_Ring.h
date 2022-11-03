#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LaserShieldPieceProjectile_Ring {
        namespace {
            inline app::LaserShieldPieceProjectile_Ring__Class* type_info_ref = nullptr;
        }
        inline app::LaserShieldPieceProjectile_Ring__Class** type_info = &type_info_ref;
        inline app::LaserShieldPieceProjectile_Ring__Class* get_class() {
            return il2cpp::get_nested_class<app::LaserShieldPieceProjectile_Ring__Class>(type_info, "", "LaserShieldPieceProjectile", "Ring");
        }
        inline app::LaserShieldPieceProjectile_Ring* create() {
            return il2cpp::create_object<app::LaserShieldPieceProjectile_Ring>(get_class());
        }
        inline app::LaserShieldPieceProjectile_Ring__Boxed* box(app::LaserShieldPieceProjectile_Ring value) {
            return il2cpp::box_value<app::LaserShieldPieceProjectile_Ring__Boxed>(get_class(), value);
        }
        inline app::LaserShieldPieceProjectile_Ring__Array* create_array(int size) {
            return il2cpp::array_new<app::LaserShieldPieceProjectile_Ring__Array>(get_class(), size);
        }
        inline app::LaserShieldPieceProjectile_Ring__Array* create_array(const std::vector<app::LaserShieldPieceProjectile_Ring>& items) {
            return il2cpp::array_new<app::LaserShieldPieceProjectile_Ring__Array>(get_class(), items);
        }
    } // namespace LaserShieldPieceProjectile_Ring
} // namespace app::classes::types
