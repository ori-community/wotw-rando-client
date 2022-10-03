#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LaserShooterMinibossBeamAttackBehaviour_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LaserShooterMinibossBeamAttackBehaviour_c__Class** type_info;
        inline app::LaserShooterMinibossBeamAttackBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LaserShooterMinibossBeamAttackBehaviour_c__Class>(type_info, "", "LaserShooterMinibossBeamAttackBehaviour", "<>c");
        }
        inline app::LaserShooterMinibossBeamAttackBehaviour_c* create() {
            return il2cpp::create_object<app::LaserShooterMinibossBeamAttackBehaviour_c>(get_class());
        }
    } // namespace LaserShooterMinibossBeamAttackBehaviour_c
} // namespace app::classes::types
