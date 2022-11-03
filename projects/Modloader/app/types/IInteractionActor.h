#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IInteractionActor {
        namespace {
            inline app::IInteractionActor__Class* type_info_ref = nullptr;
        }
        inline app::IInteractionActor__Class** type_info = &type_info_ref;
        inline app::IInteractionActor__Class* get_class() {
            return il2cpp::get_class<app::IInteractionActor__Class>(type_info, "Moon.InteractionGraph", "IInteractionActor");
        }
    } // namespace IInteractionActor
} // namespace app::classes::types
