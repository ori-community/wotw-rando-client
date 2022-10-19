#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnemyArenaWaveVirtualAnimator {
        inline app::EnemyArenaWaveVirtualAnimator__Class** type_info = (app::EnemyArenaWaveVirtualAnimator__Class**)(modloader::win::memory::resolve_rva(0x0472ADF0));
        inline app::EnemyArenaWaveVirtualAnimator__Class* get_class() {
            return il2cpp::get_class<app::EnemyArenaWaveVirtualAnimator__Class>(type_info, "", "EnemyArenaWaveVirtualAnimator");
        }
        inline app::EnemyArenaWaveVirtualAnimator* create() {
            return il2cpp::create_object<app::EnemyArenaWaveVirtualAnimator>(get_class());
        }
    } // namespace EnemyArenaWaveVirtualAnimator
} // namespace app::classes::types
