#pragma once
#include <Modloader/app/structs/GameplayToCinematicEntity.h>
#include <Modloader/app/structs/GameplayToCinematicEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameplayToCinematicEntity {
        inline app::GameplayToCinematicEntity__Class** type_info() {
            static app::GameplayToCinematicEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameplayToCinematicEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameplayToCinematicEntity__Class* get_class() {
            return il2cpp::get_class<app::GameplayToCinematicEntity__Class>(type_info(), "Moon.Timeline", "GameplayToCinematicEntity");
        }
        inline app::GameplayToCinematicEntity* create() {
            return il2cpp::create_object<app::GameplayToCinematicEntity>(get_class());
        }
    } // namespace GameplayToCinematicEntity
} // namespace app::classes::types
