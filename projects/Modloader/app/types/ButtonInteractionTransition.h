#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ButtonInteractionTransition {
        namespace {
            inline app::ButtonInteractionTransition__Class* type_info_ref = nullptr;
        }
        inline app::ButtonInteractionTransition__Class** type_info = &type_info_ref;
        inline app::ButtonInteractionTransition__Class* get_class() {
            return il2cpp::get_class<app::ButtonInteractionTransition__Class>(type_info, "Moon.InteractionGraph", "ButtonInteractionTransition");
        }
        inline app::ButtonInteractionTransition* create() {
            return il2cpp::create_object<app::ButtonInteractionTransition>(get_class());
        }
    } // namespace ButtonInteractionTransition
} // namespace app::classes::types
