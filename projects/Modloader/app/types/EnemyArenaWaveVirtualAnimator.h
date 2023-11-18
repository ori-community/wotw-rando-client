#pragma once
#include <Modloader/app/structs/EnemyArenaWaveVirtualAnimator.h>
#include <Modloader/app/structs/EnemyArenaWaveVirtualAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnemyArenaWaveVirtualAnimator {
        inline app::EnemyArenaWaveVirtualAnimator__Class** type_info() {
            static app::EnemyArenaWaveVirtualAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EnemyArenaWaveVirtualAnimator__Class**)(modloader::win::memory::resolve_rva(0x0472ADF0));
            }
            return cache;
        }
        inline app::EnemyArenaWaveVirtualAnimator__Class* get_class() {
            return il2cpp::get_class<app::EnemyArenaWaveVirtualAnimator__Class>(type_info(), "", "EnemyArenaWaveVirtualAnimator");
        }
        inline app::EnemyArenaWaveVirtualAnimator* create() {
            return il2cpp::create_object<app::EnemyArenaWaveVirtualAnimator>(get_class());
        }
    } // namespace EnemyArenaWaveVirtualAnimator
} // namespace app::classes::types
