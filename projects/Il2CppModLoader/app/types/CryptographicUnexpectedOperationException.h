#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CryptographicUnexpectedOperationException {
        inline app::CryptographicUnexpectedOperationException__Class** type_info = (app::CryptographicUnexpectedOperationException__Class**)(modloader::win::memory::resolve_rva(0x0474B250));
        inline app::CryptographicUnexpectedOperationException__Class* get_class() {
            return il2cpp::get_class<app::CryptographicUnexpectedOperationException__Class>(type_info, "System.Security.Cryptography", "CryptographicUnexpectedOperationException");
        }
        inline app::CryptographicUnexpectedOperationException* create() {
            return il2cpp::create_object<app::CryptographicUnexpectedOperationException>(get_class());
        }
    } // namespace CryptographicUnexpectedOperationException
} // namespace app::classes::types
