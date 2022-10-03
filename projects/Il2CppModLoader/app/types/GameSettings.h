#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GameSettings__Class** type_info;
        inline app::GameSettings__Class* get_class() {
            return il2cpp::get_class<app::GameSettings__Class>(type_info, "", "GameSettings");
        }
        inline app::GameSettings* create() {
            return il2cpp::create_object<app::GameSettings>(get_class());
        }
    } // namespace GameSettings
} // namespace app::classes::types
