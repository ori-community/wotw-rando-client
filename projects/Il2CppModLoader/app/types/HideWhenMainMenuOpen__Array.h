#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HideWhenMainMenuOpen__Array {
        namespace {
            app::HideWhenMainMenuOpen__Array__Class* type_info_ref = nullptr;
        }
        app::HideWhenMainMenuOpen__Array__Class** type_info = &type_info_ref;
        inline app::HideWhenMainMenuOpen__Array__Class* get_class() {
            return il2cpp::get_class<app::HideWhenMainMenuOpen__Array__Class>(type_info, "", "HideWhenMainMenuOpen[]");
        }
        inline app::HideWhenMainMenuOpen__Array* create() {
            return il2cpp::create_object<app::HideWhenMainMenuOpen__Array>(get_class());
        }
    } // namespace HideWhenMainMenuOpen__Array
} // namespace app::classes::types
