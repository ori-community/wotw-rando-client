#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AuthenticationManager {
        inline app::AuthenticationManager__Class** type_info = (app::AuthenticationManager__Class**)(modloader::win::memory::resolve_rva(0x04774AD8));
        inline app::AuthenticationManager__Class* get_class() {
            return il2cpp::get_class<app::AuthenticationManager__Class>(type_info, "System.Net", "AuthenticationManager");
        }
        inline app::AuthenticationManager* create() {
            return il2cpp::create_object<app::AuthenticationManager>(get_class());
        }
    } // namespace AuthenticationManager
} // namespace app::classes::types
