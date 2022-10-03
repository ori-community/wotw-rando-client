#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CultureNotFoundException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CultureNotFoundException__Class** type_info;
        inline app::CultureNotFoundException__Class* get_class() {
            return il2cpp::get_class<app::CultureNotFoundException__Class>(type_info, "System.Globalization", "CultureNotFoundException");
        }
        inline app::CultureNotFoundException* create() {
            return il2cpp::create_object<app::CultureNotFoundException>(get_class());
        }
    } // namespace CultureNotFoundException
} // namespace app::classes::types
