#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DeathWispsManager {
        inline app::DeathWispsManager__Class** type_info = (app::DeathWispsManager__Class**)(modloader::win::memory::resolve_rva(0x047437C0));
        inline app::DeathWispsManager__Class* get_class() {
            return il2cpp::get_class<app::DeathWispsManager__Class>(type_info, "", "DeathWispsManager");
        }
        inline app::DeathWispsManager* create() {
            return il2cpp::create_object<app::DeathWispsManager>(get_class());
        }
    } // namespace DeathWispsManager
} // namespace app::classes::types
