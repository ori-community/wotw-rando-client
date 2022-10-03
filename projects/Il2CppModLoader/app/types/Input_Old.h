#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Input_Old {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Input_Old__Class** type_info;
        inline app::Input_Old__Class* get_class() {
            return il2cpp::get_nested_class<app::Input_Old__Class>(type_info, "Core", "Input", "Old");
        }
        inline app::Input_Old* create() {
            return il2cpp::create_object<app::Input_Old>(get_class());
        }
    } // namespace Input_Old
} // namespace app::classes::types
