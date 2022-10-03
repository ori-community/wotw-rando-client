#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LaserShooterEntityPlaceholder {
        namespace {
            app::LaserShooterEntityPlaceholder__Class* type_info_ref = nullptr;
        }
        app::LaserShooterEntityPlaceholder__Class** type_info = &type_info_ref;
        inline app::LaserShooterEntityPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterEntityPlaceholder__Class>(type_info, "", "LaserShooterEntityPlaceholder");
        }
        inline app::LaserShooterEntityPlaceholder* create() {
            return il2cpp::create_object<app::LaserShooterEntityPlaceholder>(get_class());
        }
    } // namespace LaserShooterEntityPlaceholder
} // namespace app::classes::types
