#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Input_Dbg {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Input_Dbg__Class** type_info;
        inline app::Input_Dbg__Class* get_class() {
            return il2cpp::get_nested_class<app::Input_Dbg__Class>(type_info, "Core", "Input", "Dbg");
        }
        inline app::Input_Dbg* create() {
            return il2cpp::create_object<app::Input_Dbg>(get_class());
        }
    } // namespace Input_Dbg
} // namespace app::classes::types
