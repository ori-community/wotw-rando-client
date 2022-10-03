#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeriveBytes {
        namespace {
            app::DeriveBytes__Class* type_info_ref = nullptr;
        }
        app::DeriveBytes__Class** type_info = &type_info_ref;
        inline app::DeriveBytes__Class* get_class() {
            return il2cpp::get_class<app::DeriveBytes__Class>(type_info, "System.Security.Cryptography", "DeriveBytes");
        }
        inline app::DeriveBytes* create() {
            return il2cpp::create_object<app::DeriveBytes>(get_class());
        }
    } // namespace DeriveBytes
} // namespace app::classes::types
