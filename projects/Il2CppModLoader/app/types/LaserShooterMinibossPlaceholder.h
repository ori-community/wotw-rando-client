#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LaserShooterMinibossPlaceholder {
        namespace {
            inline app::LaserShooterMinibossPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::LaserShooterMinibossPlaceholder__Class** type_info = &type_info_ref;
        inline app::LaserShooterMinibossPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::LaserShooterMinibossPlaceholder__Class>(type_info, "", "LaserShooterMinibossPlaceholder");
        }
        inline app::LaserShooterMinibossPlaceholder* create() {
            return il2cpp::create_object<app::LaserShooterMinibossPlaceholder>(get_class());
        }
    } // namespace LaserShooterMinibossPlaceholder
} // namespace app::classes::types
