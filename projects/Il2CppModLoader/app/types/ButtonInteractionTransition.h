#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ButtonInteractionTransition {
        namespace {
            app::ButtonInteractionTransition__Class* type_info_ref = nullptr;
        }
        app::ButtonInteractionTransition__Class** type_info = &type_info_ref;
        inline app::ButtonInteractionTransition__Class* get_class() {
            return il2cpp::get_class<app::ButtonInteractionTransition__Class>(type_info, "Moon.InteractionGraph", "ButtonInteractionTransition");
        }
        inline app::ButtonInteractionTransition* create() {
            return il2cpp::create_object<app::ButtonInteractionTransition>(get_class());
        }
    } // namespace ButtonInteractionTransition
} // namespace app::classes::types
