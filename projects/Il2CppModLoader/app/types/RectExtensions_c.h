#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RectExtensions_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RectExtensions_c__Class** type_info;
        inline app::RectExtensions_c__Class* get_class() {
            return il2cpp::get_nested_class<app::RectExtensions_c__Class>(type_info, "Sini.Unity", "RectExtensions", "<>c");
        }
        inline app::RectExtensions_c* create() {
            return il2cpp::create_object<app::RectExtensions_c>(get_class());
        }
    } // namespace RectExtensions_c
} // namespace app::classes::types
