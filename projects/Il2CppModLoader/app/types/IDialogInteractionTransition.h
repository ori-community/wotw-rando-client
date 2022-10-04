#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDialogInteractionTransition {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDialogInteractionTransition__Class** type_info;
        inline app::IDialogInteractionTransition__Class* get_class() {
            return il2cpp::get_class<app::IDialogInteractionTransition__Class>(type_info, "", "IDialogInteractionTransition");
        }
        inline app::IDialogInteractionTransition__Array* create_array(int size) {
            return il2cpp::array_new<app::IDialogInteractionTransition__Array>(get_class(), size);
        }
    } // namespace IDialogInteractionTransition
} // namespace app::classes::types
