#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HideWhenMainMenuOpen {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HideWhenMainMenuOpen__Class** type_info;
        inline app::HideWhenMainMenuOpen__Class* get_class() {
            return il2cpp::get_class<app::HideWhenMainMenuOpen__Class>(type_info, "", "HideWhenMainMenuOpen");
        }
        inline app::HideWhenMainMenuOpen* create() {
            return il2cpp::create_object<app::HideWhenMainMenuOpen>(get_class());
        }
        inline app::HideWhenMainMenuOpen__Array* create_array(int size) {
            return il2cpp::array_new<app::HideWhenMainMenuOpen__Array>(get_class(), size);
        }
    } // namespace HideWhenMainMenuOpen
} // namespace app::classes::types
