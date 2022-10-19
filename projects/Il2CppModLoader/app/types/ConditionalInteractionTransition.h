#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConditionalInteractionTransition {
        namespace {
            inline app::ConditionalInteractionTransition__Class* type_info_ref = nullptr;
        }
        inline app::ConditionalInteractionTransition__Class** type_info = &type_info_ref;
        inline app::ConditionalInteractionTransition__Class* get_class() {
            return il2cpp::get_class<app::ConditionalInteractionTransition__Class>(type_info, "Moon.InteractionGraph", "ConditionalInteractionTransition");
        }
        inline app::ConditionalInteractionTransition* create() {
            return il2cpp::create_object<app::ConditionalInteractionTransition>(get_class());
        }
    } // namespace ConditionalInteractionTransition
} // namespace app::classes::types
