#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnemyArenaVirtualAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnemyArenaVirtualAnimator__Class** type_info;
        inline app::EnemyArenaVirtualAnimator__Class* get_class() {
            return il2cpp::get_class<app::EnemyArenaVirtualAnimator__Class>(type_info, "", "EnemyArenaVirtualAnimator");
        }
        inline app::EnemyArenaVirtualAnimator* create() {
            return il2cpp::create_object<app::EnemyArenaVirtualAnimator>(get_class());
        }
    } // namespace EnemyArenaVirtualAnimator
} // namespace app::classes::types
