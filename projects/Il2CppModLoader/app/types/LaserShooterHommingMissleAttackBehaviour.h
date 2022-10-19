#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LaserShooterHommingMissleAttackBehaviour {
        namespace {
            inline app::LaserShooterHommingMissleAttackBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::LaserShooterHommingMissleAttackBehaviour__Class** type_info = &type_info_ref;
        inline app::LaserShooterHommingMissleAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterHommingMissleAttackBehaviour__Class>(type_info, "", "LaserShooterHommingMissleAttackBehaviour");
        }
        inline app::LaserShooterHommingMissleAttackBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterHommingMissleAttackBehaviour>(get_class());
        }
    } // namespace LaserShooterHommingMissleAttackBehaviour
} // namespace app::classes::types
