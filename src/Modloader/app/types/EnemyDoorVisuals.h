#pragma once
#include <Modloader/app/structs/EnemyDoorVisuals.h>
#include <Modloader/app/structs/EnemyDoorVisuals__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnemyDoorVisuals {
        inline app::EnemyDoorVisuals__Class** type_info() {
            static app::EnemyDoorVisuals__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EnemyDoorVisuals__Class**)(modloader::win::memory::resolve_rva(0x0478EBA8));
            }
            return cache;
        }
        inline app::EnemyDoorVisuals__Class* get_class() {
            return il2cpp::get_class<app::EnemyDoorVisuals__Class>(type_info(), "", "EnemyDoorVisuals");
        }
        inline app::EnemyDoorVisuals* create() {
            return il2cpp::create_object<app::EnemyDoorVisuals>(get_class());
        }
    } // namespace EnemyDoorVisuals
} // namespace app::classes::types
