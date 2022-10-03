#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CryptographicUnexpectedOperationException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CryptographicUnexpectedOperationException__Class** type_info;
        inline app::CryptographicUnexpectedOperationException__Class* get_class() {
            return il2cpp::get_class<app::CryptographicUnexpectedOperationException__Class>(type_info, "System.Security.Cryptography", "CryptographicUnexpectedOperationException");
        }
        inline app::CryptographicUnexpectedOperationException* create() {
            return il2cpp::create_object<app::CryptographicUnexpectedOperationException>(get_class());
        }
    } // namespace CryptographicUnexpectedOperationException
} // namespace app::classes::types
