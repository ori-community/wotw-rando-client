#pragma once
#include <Modloader/app/structs/LaserShooterShieldAttackBehaviour_State__Enum.h>
#include <Modloader/app/structs/LaserShooterShieldAttackBehaviour_State__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterShieldAttackBehaviour_State__Enum {
        inline app::LaserShooterShieldAttackBehaviour_State__Enum__Class** type_info() {
            static app::LaserShooterShieldAttackBehaviour_State__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterShieldAttackBehaviour_State__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterShieldAttackBehaviour_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LaserShooterShieldAttackBehaviour_State__Enum__Class>(type_info(), "", "LaserShooterShieldAttackBehaviour", "State");
        }
        inline app::LaserShooterShieldAttackBehaviour_State__Enum* create() {
            return il2cpp::create_object<app::LaserShooterShieldAttackBehaviour_State__Enum>(get_class());
        }
    } // namespace LaserShooterShieldAttackBehaviour_State__Enum
} // namespace app::classes::types
