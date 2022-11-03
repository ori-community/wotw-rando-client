#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InteractionTransition {
        namespace {
            inline app::InteractionTransition__Class* type_info_ref = nullptr;
        }
        inline app::InteractionTransition__Class** type_info = &type_info_ref;
        inline app::InteractionTransition__Class* get_class() {
            return il2cpp::get_class<app::InteractionTransition__Class>(type_info, "Moon.InteractionGraph", "InteractionTransition");
        }
        inline app::InteractionTransition* create() {
            return il2cpp::create_object<app::InteractionTransition>(get_class());
        }
    } // namespace InteractionTransition
} // namespace app::classes::types
