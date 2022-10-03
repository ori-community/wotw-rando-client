#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameMapUI {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameMapUI__Class** type_info;
        inline app::GameMapUI__Class* get_class() {
            return il2cpp::get_class<app::GameMapUI__Class>(type_info, "", "GameMapUI");
        }
        inline app::GameMapUI* create() {
            return il2cpp::create_object<app::GameMapUI>(get_class());
        }
    } // namespace GameMapUI
} // namespace app::classes::types
