#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OptionsScreen_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OptionsScreen_c__Class** type_info;
        inline app::OptionsScreen_c__Class* get_class() {
            return il2cpp::get_nested_class<app::OptionsScreen_c__Class>(type_info, "", "OptionsScreen", "<>c");
        }
        inline app::OptionsScreen_c* create() {
            return il2cpp::create_object<app::OptionsScreen_c>(get_class());
        }
    } // namespace OptionsScreen_c
} // namespace app::classes::types
