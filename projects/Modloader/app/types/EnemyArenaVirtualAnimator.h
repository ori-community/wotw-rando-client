#pragma once
#include <Modloader/app/structs/EnemyArenaVirtualAnimator.h>
#include <Modloader/app/structs/EnemyArenaVirtualAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnemyArenaVirtualAnimator {
        inline app::EnemyArenaVirtualAnimator__Class** type_info() {
            static app::EnemyArenaVirtualAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EnemyArenaVirtualAnimator__Class**)(modloader::win::memory::resolve_rva(0x047309C8));
            }
            return cache;
        }
        inline app::EnemyArenaVirtualAnimator__Class* get_class() {
            return il2cpp::get_class<app::EnemyArenaVirtualAnimator__Class>(type_info(), "", "EnemyArenaVirtualAnimator");
        }
        inline app::EnemyArenaVirtualAnimator* create() {
            return il2cpp::create_object<app::EnemyArenaVirtualAnimator>(get_class());
        }
    } // namespace EnemyArenaVirtualAnimator
} // namespace app::classes::types
