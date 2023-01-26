#pragma once
#include <Modloader/app/structs/CircleGameplayZone.h>
#include <Modloader/app/structs/CircleGameplayZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CircleGameplayZone {
        inline app::CircleGameplayZone__Class** type_info() {
            static app::CircleGameplayZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CircleGameplayZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CircleGameplayZone__Class* get_class() {
            return il2cpp::get_class<app::CircleGameplayZone__Class>(type_info(), "", "CircleGameplayZone");
        }
        inline app::CircleGameplayZone* create() {
            return il2cpp::create_object<app::CircleGameplayZone>(get_class());
        }
    } // namespace CircleGameplayZone
} // namespace app::classes::types
