#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TripleDESCryptoServiceProvider {
        inline app::TripleDESCryptoServiceProvider__Class** type_info = (app::TripleDESCryptoServiceProvider__Class**)(modloader::win::memory::resolve_rva(0x0471C448));
        inline app::TripleDESCryptoServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::TripleDESCryptoServiceProvider__Class>(type_info, "System.Security.Cryptography", "TripleDESCryptoServiceProvider");
        }
        inline app::TripleDESCryptoServiceProvider* create() {
            return il2cpp::create_object<app::TripleDESCryptoServiceProvider>(get_class());
        }
    } // namespace TripleDESCryptoServiceProvider
} // namespace app::classes::types
