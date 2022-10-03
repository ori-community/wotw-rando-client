#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeathWispsManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DeathWispsManager__Class** type_info;
        inline app::DeathWispsManager__Class* get_class() {
            return il2cpp::get_class<app::DeathWispsManager__Class>(type_info, "", "DeathWispsManager");
        }
        inline app::DeathWispsManager* create() {
            return il2cpp::create_object<app::DeathWispsManager>(get_class());
        }
    } // namespace DeathWispsManager
} // namespace app::classes::types
