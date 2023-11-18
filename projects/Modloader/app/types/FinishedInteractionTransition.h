#pragma once
#include <Modloader/app/structs/FinishedInteractionTransition.h>
#include <Modloader/app/structs/FinishedInteractionTransition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FinishedInteractionTransition {
        inline app::FinishedInteractionTransition__Class** type_info() {
            static app::FinishedInteractionTransition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FinishedInteractionTransition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FinishedInteractionTransition__Class* get_class() {
            return il2cpp::get_class<app::FinishedInteractionTransition__Class>(type_info(), "Moon.InteractionGraph", "FinishedInteractionTransition");
        }
        inline app::FinishedInteractionTransition* create() {
            return il2cpp::create_object<app::FinishedInteractionTransition>(get_class());
        }
    } // namespace FinishedInteractionTransition
} // namespace app::classes::types
