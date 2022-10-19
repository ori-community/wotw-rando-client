#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RC2CryptoServiceProvider {
        inline app::RC2CryptoServiceProvider__Class** type_info = (app::RC2CryptoServiceProvider__Class**)(modloader::win::memory::resolve_rva(0x04762F78));
        inline app::RC2CryptoServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::RC2CryptoServiceProvider__Class>(type_info, "System.Security.Cryptography", "RC2CryptoServiceProvider");
        }
        inline app::RC2CryptoServiceProvider* create() {
            return il2cpp::create_object<app::RC2CryptoServiceProvider>(get_class());
        }
    } // namespace RC2CryptoServiceProvider
} // namespace app::classes::types
