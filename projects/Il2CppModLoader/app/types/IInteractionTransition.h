#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IInteractionTransition {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IInteractionTransition__Class** type_info;
        inline app::IInteractionTransition__Class* get_class() {
            return il2cpp::get_class<app::IInteractionTransition__Class>(type_info, "Moon.InteractionGraph", "IInteractionTransition");
        }
        inline app::IInteractionTransition* create() {
            return il2cpp::create_object<app::IInteractionTransition>(get_class());
        }
        inline app::IInteractionTransition__Array* create_array(int size) {
            return il2cpp::array_new<app::IInteractionTransition__Array>(get_class(), size);
        }
    } // namespace IInteractionTransition
} // namespace app::classes::types
