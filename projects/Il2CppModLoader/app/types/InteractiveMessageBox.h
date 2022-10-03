#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InteractiveMessageBox {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InteractiveMessageBox__Class** type_info;
        inline app::InteractiveMessageBox__Class* get_class() {
            return il2cpp::get_class<app::InteractiveMessageBox__Class>(type_info, "", "InteractiveMessageBox");
        }
        inline app::InteractiveMessageBox* create() {
            return il2cpp::create_object<app::InteractiveMessageBox>(get_class());
        }
    } // namespace InteractiveMessageBox
} // namespace app::classes::types
