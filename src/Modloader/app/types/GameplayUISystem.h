#pragma once
#include <Modloader/app/structs/GameplayUISystem.h>
#include <Modloader/app/structs/GameplayUISystem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameplayUISystem {
        inline app::GameplayUISystem__Class** type_info() {
            static app::GameplayUISystem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameplayUISystem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameplayUISystem__Class* get_class() {
            return il2cpp::get_class<app::GameplayUISystem__Class>(type_info(), "Moon.Timeline.Systems", "GameplayUISystem");
        }
        inline app::GameplayUISystem* create() {
            return il2cpp::create_object<app::GameplayUISystem>(get_class());
        }
    } // namespace GameplayUISystem
} // namespace app::classes::types
