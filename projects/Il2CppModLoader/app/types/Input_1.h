#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Input_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Input_1__Class** type_info;
        inline app::Input_1__Class* get_class() {
            return il2cpp::get_class<app::Input_1__Class>(type_info, "Core", "Input");
        }
        inline app::Input_1* create() {
            return il2cpp::create_object<app::Input_1>(get_class());
        }
    } // namespace Input_1
} // namespace app::classes::types
