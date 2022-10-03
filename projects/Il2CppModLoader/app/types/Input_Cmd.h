#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Input_Cmd {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Input_Cmd__Class** type_info;
        inline app::Input_Cmd__Class* get_class() {
            return il2cpp::get_nested_class<app::Input_Cmd__Class>(type_info, "Core", "Input", "Cmd");
        }
        inline app::Input_Cmd* create() {
            return il2cpp::create_object<app::Input_Cmd>(get_class());
        }
    } // namespace Input_Cmd
} // namespace app::classes::types
