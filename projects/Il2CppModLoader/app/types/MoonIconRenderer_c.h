#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonIconRenderer_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonIconRenderer_c__Class** type_info;
        inline app::MoonIconRenderer_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonIconRenderer_c__Class>(type_info, "CatlikeCoding.TextBox", "MoonIconRenderer", "<>c");
        }
        inline app::MoonIconRenderer_c* create() {
            return il2cpp::create_object<app::MoonIconRenderer_c>(get_class());
        }
    } // namespace MoonIconRenderer_c
} // namespace app::classes::types
