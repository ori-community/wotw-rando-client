#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CryptoStreamMode__Enum {
        namespace {
            app::CryptoStreamMode__Enum__Class* type_info_ref = nullptr;
        }
        app::CryptoStreamMode__Enum__Class** type_info = &type_info_ref;
        inline app::CryptoStreamMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::CryptoStreamMode__Enum__Class>(type_info, "System.Security.Cryptography", "CryptoStreamMode");
        }
        inline app::CryptoStreamMode__Enum* create() {
            return il2cpp::create_object<app::CryptoStreamMode__Enum>(get_class());
        }
    } // namespace CryptoStreamMode__Enum
} // namespace app::classes::types
