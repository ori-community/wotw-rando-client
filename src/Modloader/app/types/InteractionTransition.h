#pragma once
#include <Modloader/app/structs/InteractionTransition.h>
#include <Modloader/app/structs/InteractionTransition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionTransition {
        inline app::InteractionTransition__Class** type_info() {
            static app::InteractionTransition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InteractionTransition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InteractionTransition__Class* get_class() {
            return il2cpp::get_class<app::InteractionTransition__Class>(type_info(), "Moon.InteractionGraph", "InteractionTransition");
        }
        inline app::InteractionTransition* create() {
            return il2cpp::create_object<app::InteractionTransition>(get_class());
        }
    } // namespace InteractionTransition
} // namespace app::classes::types
