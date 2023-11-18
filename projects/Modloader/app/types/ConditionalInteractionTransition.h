#pragma once
#include <Modloader/app/structs/ConditionalInteractionTransition.h>
#include <Modloader/app/structs/ConditionalInteractionTransition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConditionalInteractionTransition {
        inline app::ConditionalInteractionTransition__Class** type_info() {
            static app::ConditionalInteractionTransition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConditionalInteractionTransition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConditionalInteractionTransition__Class* get_class() {
            return il2cpp::get_class<app::ConditionalInteractionTransition__Class>(type_info(), "Moon.InteractionGraph", "ConditionalInteractionTransition");
        }
        inline app::ConditionalInteractionTransition* create() {
            return il2cpp::create_object<app::ConditionalInteractionTransition>(get_class());
        }
    } // namespace ConditionalInteractionTransition
} // namespace app::classes::types
