#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SHA1CryptoServiceProvider {
        inline app::SHA1CryptoServiceProvider__Class** type_info = (app::SHA1CryptoServiceProvider__Class**)(modloader::win::memory::resolve_rva(0x0470A918));
        inline app::SHA1CryptoServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::SHA1CryptoServiceProvider__Class>(type_info, "System.Security.Cryptography", "SHA1CryptoServiceProvider");
        }
        inline app::SHA1CryptoServiceProvider* create() {
            return il2cpp::create_object<app::SHA1CryptoServiceProvider>(get_class());
        }
    } // namespace SHA1CryptoServiceProvider
} // namespace app::classes::types
