#pragma once
#include <Modloader/app/structs/Rfc2898DeriveBytes.h>
#include <Modloader/app/structs/Rfc2898DeriveBytes__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Rfc2898DeriveBytes {
        inline app::Rfc2898DeriveBytes__Class** type_info() {
            static app::Rfc2898DeriveBytes__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Rfc2898DeriveBytes__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Rfc2898DeriveBytes__Class* get_class() {
            return il2cpp::get_class<app::Rfc2898DeriveBytes__Class>(type_info(), "System.Security.Cryptography", "Rfc2898DeriveBytes");
        }
        inline app::Rfc2898DeriveBytes* create() {
            return il2cpp::create_object<app::Rfc2898DeriveBytes>(get_class());
        }
    } // namespace Rfc2898DeriveBytes
} // namespace app::classes::types
