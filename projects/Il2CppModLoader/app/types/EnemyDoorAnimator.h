#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnemyDoorAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnemyDoorAnimator__Class** type_info;
        inline app::EnemyDoorAnimator__Class* get_class() {
            return il2cpp::get_class<app::EnemyDoorAnimator__Class>(type_info, "", "EnemyDoorAnimator");
        }
        inline app::EnemyDoorAnimator* create() {
            return il2cpp::create_object<app::EnemyDoorAnimator>(get_class());
        }
    } // namespace EnemyDoorAnimator
} // namespace app::classes::types
