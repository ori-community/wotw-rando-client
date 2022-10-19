#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDialogInteractionTransition__Array {
        namespace {
            inline app::IDialogInteractionTransition__Array__Class* type_info_ref = nullptr;
        }
        inline app::IDialogInteractionTransition__Array__Class** type_info = &type_info_ref;
        inline app::IDialogInteractionTransition__Array__Class* get_class() {
            return il2cpp::get_class<app::IDialogInteractionTransition__Array__Class>(type_info, "", "IDialogInteractionTransition[]");
        }
        inline app::IDialogInteractionTransition__Array* create() {
            return il2cpp::create_object<app::IDialogInteractionTransition__Array>(get_class());
        }
    } // namespace IDialogInteractionTransition__Array
} // namespace app::classes::types
