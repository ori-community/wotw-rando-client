#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LaserShooterMinibossPath {
        namespace {
            inline app::LaserShooterMinibossPath__Class* type_info_ref = nullptr;
        }
        inline app::LaserShooterMinibossPath__Class** type_info = &type_info_ref;
        inline app::LaserShooterMinibossPath__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossPath__Class>(type_info, "", "LaserShooterMinibossPath");
        }
        inline app::LaserShooterMinibossPath* create() {
            return il2cpp::create_object<app::LaserShooterMinibossPath>(get_class());
        }
    } // namespace LaserShooterMinibossPath
} // namespace app::classes::types
