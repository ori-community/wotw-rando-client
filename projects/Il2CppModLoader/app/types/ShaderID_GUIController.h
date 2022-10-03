#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShaderID_GUIController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ShaderID_GUIController__Class** type_info;
        inline app::ShaderID_GUIController__Class* get_class() {
            return il2cpp::get_class<app::ShaderID_GUIController__Class>(type_info, "", "ShaderID_GUIController");
        }
        inline app::ShaderID_GUIController* create() {
            return il2cpp::create_object<app::ShaderID_GUIController>(get_class());
        }
    } // namespace ShaderID_GUIController
} // namespace app::classes::types
