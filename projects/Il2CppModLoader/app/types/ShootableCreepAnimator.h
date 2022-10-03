#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShootableCreepAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShootableCreepAnimator__Class** type_info;
        inline app::ShootableCreepAnimator__Class* get_class() {
            return il2cpp::get_class<app::ShootableCreepAnimator__Class>(type_info, "", "ShootableCreepAnimator");
        }
        inline app::ShootableCreepAnimator* create() {
            return il2cpp::create_object<app::ShootableCreepAnimator>(get_class());
        }
    } // namespace ShootableCreepAnimator
} // namespace app::classes::types
