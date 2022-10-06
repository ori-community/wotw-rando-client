#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDialogTransition {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDialogTransition__Class** type_info;
        inline app::IDialogTransition__Class* get_class() {
            return il2cpp::get_class<app::IDialogTransition__Class>(type_info, "", "IDialogTransition");
        }
        inline app::IDialogTransition__Array* create_array(int size) {
            return il2cpp::array_new<app::IDialogTransition__Array>(get_class(), size);
        }
        inline app::IDialogTransition__Array* create_array(const std::vector<app::IDialogTransition*>& items) {
            return il2cpp::array_new<app::IDialogTransition__Array>(get_class(), items);
        }
    } // namespace IDialogTransition
} // namespace app::classes::types
