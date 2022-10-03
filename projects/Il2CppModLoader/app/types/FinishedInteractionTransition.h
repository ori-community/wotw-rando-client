#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FinishedInteractionTransition {
        namespace {
            app::FinishedInteractionTransition__Class* type_info_ref = nullptr;
        }
        app::FinishedInteractionTransition__Class** type_info = &type_info_ref;
        inline app::FinishedInteractionTransition__Class* get_class() {
            return il2cpp::get_class<app::FinishedInteractionTransition__Class>(type_info, "Moon.InteractionGraph", "FinishedInteractionTransition");
        }
        inline app::FinishedInteractionTransition* create() {
            return il2cpp::create_object<app::FinishedInteractionTransition>(get_class());
        }
    } // namespace FinishedInteractionTransition
} // namespace app::classes::types
