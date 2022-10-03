#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonApplication {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonApplication__Class** type_info;
        inline app::MoonApplication__Class* get_class() {
            return il2cpp::get_class<app::MoonApplication__Class>(type_info, "", "MoonApplication");
        }
        inline app::MoonApplication* create() {
            return il2cpp::create_object<app::MoonApplication>(get_class());
        }
    } // namespace MoonApplication
} // namespace app::classes::types
