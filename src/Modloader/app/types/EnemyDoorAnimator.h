#pragma once
#include <Modloader/app/structs/EnemyDoorAnimator.h>
#include <Modloader/app/structs/EnemyDoorAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnemyDoorAnimator {
        inline app::EnemyDoorAnimator__Class** type_info() {
            static app::EnemyDoorAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EnemyDoorAnimator__Class**)(modloader::win::memory::resolve_rva(0x0472AB60));
            }
            return cache;
        }
        inline app::EnemyDoorAnimator__Class* get_class() {
            return il2cpp::get_class<app::EnemyDoorAnimator__Class>(type_info(), "", "EnemyDoorAnimator");
        }
        inline app::EnemyDoorAnimator* create() {
            return il2cpp::create_object<app::EnemyDoorAnimator>(get_class());
        }
    } // namespace EnemyDoorAnimator
} // namespace app::classes::types
