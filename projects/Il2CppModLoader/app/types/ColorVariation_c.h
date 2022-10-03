#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColorVariation_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ColorVariation_c__Class** type_info;
        inline app::ColorVariation_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ColorVariation_c__Class>(type_info, "", "ColorVariation", "<>c");
        }
        inline app::ColorVariation_c* create() {
            return il2cpp::create_object<app::ColorVariation_c>(get_class());
        }
    } // namespace ColorVariation_c
} // namespace app::classes::types
