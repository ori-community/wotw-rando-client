#pragma once
#include <Modloader/app/structs/IInteractionTransition__Array.h>
#include <Modloader/app/structs/IInteractionTransition__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IInteractionTransition__Array {
        inline app::IInteractionTransition__Array__Class** type_info() {
            static app::IInteractionTransition__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IInteractionTransition__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IInteractionTransition__Array__Class* get_class() {
            return il2cpp::get_class<app::IInteractionTransition__Array__Class>(type_info(), "Moon.InteractionGraph", "IInteractionTransition[]");
        }
        inline app::IInteractionTransition__Array* create() {
            return il2cpp::create_object<app::IInteractionTransition__Array>(get_class());
        }
    } // namespace IInteractionTransition__Array
} // namespace app::classes::types
