#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MD5CryptoServiceProvider {
        inline app::MD5CryptoServiceProvider__Class** type_info = (app::MD5CryptoServiceProvider__Class**)(modloader::win::memory::resolve_rva(0x0474AD20));
        inline app::MD5CryptoServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::MD5CryptoServiceProvider__Class>(type_info, "System.Security.Cryptography", "MD5CryptoServiceProvider");
        }
        inline app::MD5CryptoServiceProvider* create() {
            return il2cpp::create_object<app::MD5CryptoServiceProvider>(get_class());
        }
    } // namespace MD5CryptoServiceProvider
} // namespace app::classes::types
