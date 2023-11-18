#pragma once
#include <Modloader/app/structs/IDialogInteractionTransition__Array.h>
#include <Modloader/app/structs/IDialogInteractionTransition__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDialogInteractionTransition__Array {
        inline app::IDialogInteractionTransition__Array__Class** type_info() {
            static app::IDialogInteractionTransition__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IDialogInteractionTransition__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IDialogInteractionTransition__Array__Class* get_class() {
            return il2cpp::get_class<app::IDialogInteractionTransition__Array__Class>(type_info(), "", "IDialogInteractionTransition[]");
        }
        inline app::IDialogInteractionTransition__Array* create() {
            return il2cpp::create_object<app::IDialogInteractionTransition__Array>(get_class());
        }
    } // namespace IDialogInteractionTransition__Array
} // namespace app::classes::types
