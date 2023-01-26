#pragma once
#include <Modloader/app/structs/ButtonInteractionTransition.h>
#include <Modloader/app/structs/ButtonInteractionTransition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ButtonInteractionTransition {
        inline app::ButtonInteractionTransition__Class** type_info() {
            static app::ButtonInteractionTransition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ButtonInteractionTransition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ButtonInteractionTransition__Class* get_class() {
            return il2cpp::get_class<app::ButtonInteractionTransition__Class>(type_info(), "Moon.InteractionGraph", "ButtonInteractionTransition");
        }
        inline app::ButtonInteractionTransition* create() {
            return il2cpp::create_object<app::ButtonInteractionTransition>(get_class());
        }
    } // namespace ButtonInteractionTransition
} // namespace app::classes::types
