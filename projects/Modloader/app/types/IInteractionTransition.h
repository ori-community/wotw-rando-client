#pragma once
#include <Modloader/app/structs/IInteractionTransition.h>
#include <Modloader/app/structs/IInteractionTransition__Array.h>
#include <Modloader/app/structs/IInteractionTransition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IInteractionTransition {
        inline app::IInteractionTransition__Class** type_info() {
            static app::IInteractionTransition__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IInteractionTransition__Class**)(modloader::win::memory::resolve_rva(0x0478DEF8));
            }
            return cache;
        }
        inline app::IInteractionTransition__Class* get_class() {
            return il2cpp::get_class<app::IInteractionTransition__Class>(type_info(), "Moon.InteractionGraph", "IInteractionTransition");
        }
        inline app::IInteractionTransition__Array* create_array(int size) {
            return il2cpp::array_new<app::IInteractionTransition__Array>(get_class(), size);
        }
        inline app::IInteractionTransition__Array* create_array(const std::vector<app::IInteractionTransition*>& items) {
            return il2cpp::array_new<app::IInteractionTransition__Array>(get_class(), items);
        }
    } // namespace IInteractionTransition
} // namespace app::classes::types
