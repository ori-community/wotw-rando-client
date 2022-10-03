#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExternalKeyboard_c_DisplayClass16_0 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExternalKeyboard_c_DisplayClass16_0__Class** type_info;
        inline app::ExternalKeyboard_c_DisplayClass16_0__Class* get_class() {
            return il2cpp::get_nested_class<app::ExternalKeyboard_c_DisplayClass16_0__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "ExternalKeyboard", "<>c__DisplayClass16_0");
        }
        inline app::ExternalKeyboard_c_DisplayClass16_0* create() {
            return il2cpp::create_object<app::ExternalKeyboard_c_DisplayClass16_0>(get_class());
        }
    } // namespace ExternalKeyboard_c_DisplayClass16_0
} // namespace app::classes::types
