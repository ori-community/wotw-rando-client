#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnemyArenaVirtualAnimator {
        inline app::EnemyArenaVirtualAnimator__Class** type_info = (app::EnemyArenaVirtualAnimator__Class**)(modloader::win::memory::resolve_rva(0x047309C8));
        inline app::EnemyArenaVirtualAnimator__Class* get_class() {
            return il2cpp::get_class<app::EnemyArenaVirtualAnimator__Class>(type_info, "", "EnemyArenaVirtualAnimator");
        }
        inline app::EnemyArenaVirtualAnimator* create() {
            return il2cpp::create_object<app::EnemyArenaVirtualAnimator>(get_class());
        }
    } // namespace EnemyArenaVirtualAnimator
} // namespace app::classes::types
