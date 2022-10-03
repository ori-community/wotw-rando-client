#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Characters {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Characters__Class** type_info;
        inline app::Characters__Class* get_class() {
            return il2cpp::get_class<app::Characters__Class>(type_info, "Game", "Characters");
        }
        inline app::Characters* create() {
            return il2cpp::create_object<app::Characters>(get_class());
        }
    } // namespace Characters
} // namespace app::classes::types
