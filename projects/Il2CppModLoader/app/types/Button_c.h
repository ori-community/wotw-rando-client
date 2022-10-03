#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Button_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Button_c__Class** type_info;
        inline app::Button_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Button_c__Class>(type_info, "Moon.UI", "Button", "<>c");
        }
        inline app::Button_c* create() {
            return il2cpp::create_object<app::Button_c>(get_class());
        }
    } // namespace Button_c
} // namespace app::classes::types
