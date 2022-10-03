#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PasswordDeriveBytes {
        namespace {
            app::PasswordDeriveBytes__Class* type_info_ref = nullptr;
        }
        app::PasswordDeriveBytes__Class** type_info = &type_info_ref;
        inline app::PasswordDeriveBytes__Class* get_class() {
            return il2cpp::get_class<app::PasswordDeriveBytes__Class>(type_info, "System.Security.Cryptography", "PasswordDeriveBytes");
        }
        inline app::PasswordDeriveBytes* create() {
            return il2cpp::create_object<app::PasswordDeriveBytes>(get_class());
        }
    } // namespace PasswordDeriveBytes
} // namespace app::classes::types
