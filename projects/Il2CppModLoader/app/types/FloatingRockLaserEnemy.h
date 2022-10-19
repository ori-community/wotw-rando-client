#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FloatingRockLaserEnemy {
        namespace {
            inline app::FloatingRockLaserEnemy__Class* type_info_ref = nullptr;
        }
        inline app::FloatingRockLaserEnemy__Class** type_info = &type_info_ref;
        inline app::FloatingRockLaserEnemy__Class* get_class() {
            return il2cpp::get_class<app::FloatingRockLaserEnemy__Class>(type_info, "", "FloatingRockLaserEnemy");
        }
        inline app::FloatingRockLaserEnemy* create() {
            return il2cpp::create_object<app::FloatingRockLaserEnemy>(get_class());
        }
    } // namespace FloatingRockLaserEnemy
} // namespace app::classes::types
