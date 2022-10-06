#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDialogDecorator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDialogDecorator__Class** type_info;
        inline app::IDialogDecorator__Class* get_class() {
            return il2cpp::get_class<app::IDialogDecorator__Class>(type_info, "", "IDialogDecorator");
        }
        inline app::IDialogDecorator__Array* create_array(int size) {
            return il2cpp::array_new<app::IDialogDecorator__Array>(get_class(), size);
        }
        inline app::IDialogDecorator__Array* create_array(const std::vector<app::IDialogDecorator*>& items) {
            return il2cpp::array_new<app::IDialogDecorator__Array>(get_class(), items);
        }
    } // namespace IDialogDecorator
} // namespace app::classes::types
