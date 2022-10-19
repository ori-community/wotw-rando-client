#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LaserShooterIdleBehaviour {
        namespace {
            inline app::LaserShooterIdleBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::LaserShooterIdleBehaviour__Class** type_info = &type_info_ref;
        inline app::LaserShooterIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterIdleBehaviour__Class>(type_info, "", "LaserShooterIdleBehaviour");
        }
        inline app::LaserShooterIdleBehaviour* create() {
            return il2cpp::create_object<app::LaserShooterIdleBehaviour>(get_class());
        }
    } // namespace LaserShooterIdleBehaviour
} // namespace app::classes::types
