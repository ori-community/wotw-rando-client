#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IInteractionActor {
        namespace {
            app::IInteractionActor__Class* type_info_ref = nullptr;
        }
        app::IInteractionActor__Class** type_info = &type_info_ref;
        inline app::IInteractionActor__Class* get_class() {
            return il2cpp::get_class<app::IInteractionActor__Class>(type_info, "Moon.InteractionGraph", "IInteractionActor");
        }
    } // namespace IInteractionActor
} // namespace app::classes::types
