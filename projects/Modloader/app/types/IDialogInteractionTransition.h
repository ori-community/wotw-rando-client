#pragma once
#include <Modloader/app/structs/IDialogInteractionTransition.h>
#include <Modloader/app/structs/IDialogInteractionTransition__Array.h>
#include <Modloader/app/structs/IDialogInteractionTransition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDialogInteractionTransition {
        inline app::IDialogInteractionTransition__Class** type_info() {
            static app::IDialogInteractionTransition__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDialogInteractionTransition__Class**)(modloader::win::memory::resolve_rva(0x04727A00));
            }
            return cache;
        }
        inline app::IDialogInteractionTransition__Class* get_class() {
            return il2cpp::get_class<app::IDialogInteractionTransition__Class>(type_info(), "", "IDialogInteractionTransition");
        }
        inline app::IDialogInteractionTransition__Array* create_array(int size) {
            return il2cpp::array_new<app::IDialogInteractionTransition__Array>(get_class(), size);
        }
        inline app::IDialogInteractionTransition__Array* create_array(const std::vector<app::IDialogInteractionTransition*>& items) {
            return il2cpp::array_new<app::IDialogInteractionTransition__Array>(get_class(), items);
        }
    } // namespace IDialogInteractionTransition
} // namespace app::classes::types
