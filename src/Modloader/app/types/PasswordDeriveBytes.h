#pragma once
#include <Modloader/app/structs/PasswordDeriveBytes.h>
#include <Modloader/app/structs/PasswordDeriveBytes__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PasswordDeriveBytes {
        inline app::PasswordDeriveBytes__Class** type_info() {
            static app::PasswordDeriveBytes__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PasswordDeriveBytes__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PasswordDeriveBytes__Class* get_class() {
            return il2cpp::get_class<app::PasswordDeriveBytes__Class>(type_info(), "System.Security.Cryptography", "PasswordDeriveBytes");
        }
        inline app::PasswordDeriveBytes* create() {
            return il2cpp::create_object<app::PasswordDeriveBytes>(get_class());
        }
    } // namespace PasswordDeriveBytes
} // namespace app::classes::types
