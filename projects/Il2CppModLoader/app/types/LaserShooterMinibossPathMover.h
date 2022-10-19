#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LaserShooterMinibossPathMover {
        namespace {
            inline app::LaserShooterMinibossPathMover__Class* type_info_ref = nullptr;
        }
        inline app::LaserShooterMinibossPathMover__Class** type_info = &type_info_ref;
        inline app::LaserShooterMinibossPathMover__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossPathMover__Class>(type_info, "", "LaserShooterMinibossPathMover");
        }
        inline app::LaserShooterMinibossPathMover* create() {
            return il2cpp::create_object<app::LaserShooterMinibossPathMover>(get_class());
        }
    } // namespace LaserShooterMinibossPathMover
} // namespace app::classes::types
