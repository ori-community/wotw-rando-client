#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GUIController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GUIController__Class** type_info;
        inline app::GUIController__Class* get_class() {
            return il2cpp::get_class<app::GUIController__Class>(type_info, "", "GUIController");
        }
        inline app::GUIController* create() {
            return il2cpp::create_object<app::GUIController>(get_class());
        }
    } // namespace GUIController
} // namespace app::classes::types
