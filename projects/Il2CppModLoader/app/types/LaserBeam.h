#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LaserBeam {
        namespace {
            app::LaserBeam__Class* type_info_ref = nullptr;
        }
        app::LaserBeam__Class** type_info = &type_info_ref;
        inline app::LaserBeam__Class* get_class() {
            return il2cpp::get_class<app::LaserBeam__Class>(type_info, "", "LaserBeam");
        }
        inline app::LaserBeam* create() {
            return il2cpp::create_object<app::LaserBeam>(get_class());
        }
    } // namespace LaserBeam
} // namespace app::classes::types
