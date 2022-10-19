#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDialogCallbackNotifier {
        inline app::IDialogCallbackNotifier__Class** type_info = (app::IDialogCallbackNotifier__Class**)(modloader::win::memory::resolve_rva(0x04713B00));
        inline app::IDialogCallbackNotifier__Class* get_class() {
            return il2cpp::get_class<app::IDialogCallbackNotifier__Class>(type_info, "", "IDialogCallbackNotifier");
        }
        inline app::IDialogCallbackNotifier__Array* create_array(int size) {
            return il2cpp::array_new<app::IDialogCallbackNotifier__Array>(get_class(), size);
        }
        inline app::IDialogCallbackNotifier__Array* create_array(const std::vector<app::IDialogCallbackNotifier*>& items) {
            return il2cpp::array_new<app::IDialogCallbackNotifier__Array>(get_class(), items);
        }
    } // namespace IDialogCallbackNotifier
} // namespace app::classes::types
