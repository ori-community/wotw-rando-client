#pragma once
#include <Modloader/app/structs/IInteractionActor.h>
#include <Modloader/app/structs/IInteractionActor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IInteractionActor {
        inline app::IInteractionActor__Class** type_info() {
            static app::IInteractionActor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IInteractionActor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IInteractionActor__Class* get_class() {
            return il2cpp::get_class<app::IInteractionActor__Class>(type_info(), "Moon.InteractionGraph", "IInteractionActor");
        }
    } // namespace IInteractionActor
} // namespace app::classes::types
