#pragma once
#include <Modloader/app/structs/LaserShooterInflateToAttackBehaviour_State__Enum.h>
#include <Modloader/app/structs/LaserShooterInflateToAttackBehaviour_State__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LaserShooterInflateToAttackBehaviour_State__Enum {
        inline app::LaserShooterInflateToAttackBehaviour_State__Enum__Class** type_info() {
            static app::LaserShooterInflateToAttackBehaviour_State__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LaserShooterInflateToAttackBehaviour_State__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LaserShooterInflateToAttackBehaviour_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::LaserShooterInflateToAttackBehaviour_State__Enum__Class>(type_info(), "", "LaserShooterInflateToAttackBehaviour", "State");
        }
        inline app::LaserShooterInflateToAttackBehaviour_State__Enum* create() {
            return il2cpp::create_object<app::LaserShooterInflateToAttackBehaviour_State__Enum>(get_class());
        }
    } // namespace LaserShooterInflateToAttackBehaviour_State__Enum
} // namespace app::classes::types
