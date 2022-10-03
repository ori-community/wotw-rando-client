#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IInteractionTransition__Array {
        namespace {
            app::IInteractionTransition__Array__Class* type_info_ref = nullptr;
        }
        app::IInteractionTransition__Array__Class** type_info = &type_info_ref;
        inline app::IInteractionTransition__Array__Class* get_class() {
            return il2cpp::get_class<app::IInteractionTransition__Array__Class>(type_info, "Moon.InteractionGraph", "IInteractionTransition[]");
        }
        inline app::IInteractionTransition__Array* create() {
            return il2cpp::create_object<app::IInteractionTransition__Array>(get_class());
        }
    } // namespace IInteractionTransition__Array
} // namespace app::classes::types
