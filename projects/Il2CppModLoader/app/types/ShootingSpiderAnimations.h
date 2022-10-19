#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShootingSpiderAnimations {
        namespace {
            inline app::ShootingSpiderAnimations__Class* type_info_ref = nullptr;
        }
        inline app::ShootingSpiderAnimations__Class** type_info = &type_info_ref;
        inline app::ShootingSpiderAnimations__Class* get_class() {
            return il2cpp::get_class<app::ShootingSpiderAnimations__Class>(type_info, "", "ShootingSpiderAnimations");
        }
        inline app::ShootingSpiderAnimations* create() {
            return il2cpp::create_object<app::ShootingSpiderAnimations>(get_class());
        }
    } // namespace ShootingSpiderAnimations
} // namespace app::classes::types
