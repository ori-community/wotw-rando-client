#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AesCryptoServiceProvider {
        namespace {
            inline app::AesCryptoServiceProvider__Class* type_info_ref = nullptr;
        }
        inline app::AesCryptoServiceProvider__Class** type_info = &type_info_ref;
        inline app::AesCryptoServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::AesCryptoServiceProvider__Class>(type_info, "System.Security.Cryptography", "AesCryptoServiceProvider");
        }
        inline app::AesCryptoServiceProvider* create() {
            return il2cpp::create_object<app::AesCryptoServiceProvider>(get_class());
        }
    } // namespace AesCryptoServiceProvider
} // namespace app::classes::types
