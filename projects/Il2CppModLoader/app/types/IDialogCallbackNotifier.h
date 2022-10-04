#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDialogCallbackNotifier {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDialogCallbackNotifier__Class** type_info;
        inline app::IDialogCallbackNotifier__Class* get_class() {
            return il2cpp::get_class<app::IDialogCallbackNotifier__Class>(type_info, "", "IDialogCallbackNotifier");
        }
        inline app::IDialogCallbackNotifier__Array* create_array(int size) {
            return il2cpp::array_new<app::IDialogCallbackNotifier__Array>(get_class(), size);
        }
    } // namespace IDialogCallbackNotifier
} // namespace app::classes::types
