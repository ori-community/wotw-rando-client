#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeExtensions_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeExtensions_c__Class** type_info;
        inline app::TypeExtensions_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TypeExtensions_c__Class>(type_info, "UWPCompat.Extensions", "TypeExtensions", "<>c");
        }
        inline app::TypeExtensions_c* create() {
            return il2cpp::create_object<app::TypeExtensions_c>(get_class());
        }
    } // namespace TypeExtensions_c
} // namespace app::classes::types
