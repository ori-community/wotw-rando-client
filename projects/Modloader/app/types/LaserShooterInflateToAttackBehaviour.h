#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LaserShooterInflateToAttackBehaviour {
        namespace {
            inline app::LaserShooterInflateToAttackBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::LaserShooterInflateToAttackBehaviour__Class** type_info = &type_info_ref;
        inline app::LaserShooterInflateToAttackBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterInflateToAttackBehaviour__Class>(type_info, "", "LaserShooterInflateToAttackBehaviour");
        }
        inline app::LaserShooterInflateToAttackBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterInflateToAttackBehaviour>(get_class());
        }
    } // namespace LaserShooterInflateToAttackBehaviour
} // namespace app::classes::types
