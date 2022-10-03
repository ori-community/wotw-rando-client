#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Rfc2898DeriveBytes {
        namespace {
            app::Rfc2898DeriveBytes__Class* type_info_ref = nullptr;
        }
        app::Rfc2898DeriveBytes__Class** type_info = &type_info_ref;
        inline app::Rfc2898DeriveBytes__Class* get_class() {
            return il2cpp::get_class<app::Rfc2898DeriveBytes__Class>(type_info, "System.Security.Cryptography", "Rfc2898DeriveBytes");
        }
        inline app::Rfc2898DeriveBytes* create() {
            return il2cpp::create_object<app::Rfc2898DeriveBytes>(get_class());
        }
    } // namespace Rfc2898DeriveBytes
} // namespace app::classes::types
