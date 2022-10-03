#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DestroyOnMenuOpen {
        namespace {
            app::DestroyOnMenuOpen__Class* type_info_ref = nullptr;
        }
        app::DestroyOnMenuOpen__Class** type_info = &type_info_ref;
        inline app::DestroyOnMenuOpen__Class* get_class() {
            return il2cpp::get_class<app::DestroyOnMenuOpen__Class>(type_info, "", "DestroyOnMenuOpen");
        }
        inline app::DestroyOnMenuOpen* create() {
            return il2cpp::create_object<app::DestroyOnMenuOpen>(get_class());
        }
    } // namespace DestroyOnMenuOpen
} // namespace app::classes::types
