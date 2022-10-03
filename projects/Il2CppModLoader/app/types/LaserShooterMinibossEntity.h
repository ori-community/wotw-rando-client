#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LaserShooterMinibossEntity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LaserShooterMinibossEntity__Class** type_info;
        inline app::LaserShooterMinibossEntity__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossEntity__Class>(type_info, "", "LaserShooterMinibossEntity");
        }
        inline app::LaserShooterMinibossEntity* create() {
            return il2cpp::create_object<app::LaserShooterMinibossEntity>(get_class());
        }
    } // namespace LaserShooterMinibossEntity
} // namespace app::classes::types
