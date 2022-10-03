#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InteractionTransition {
        namespace {
            app::InteractionTransition__Class* type_info_ref = nullptr;
        }
        app::InteractionTransition__Class** type_info = &type_info_ref;
        inline app::InteractionTransition__Class* get_class() {
            return il2cpp::get_class<app::InteractionTransition__Class>(type_info, "Moon.InteractionGraph", "InteractionTransition");
        }
        inline app::InteractionTransition* create() {
            return il2cpp::create_object<app::InteractionTransition>(get_class());
        }
    } // namespace InteractionTransition
} // namespace app::classes::types
