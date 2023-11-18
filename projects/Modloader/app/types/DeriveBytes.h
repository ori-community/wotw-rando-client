#pragma once
#include <Modloader/app/structs/DeriveBytes.h>
#include <Modloader/app/structs/DeriveBytes__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DeriveBytes {
        inline app::DeriveBytes__Class** type_info() {
            static app::DeriveBytes__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DeriveBytes__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DeriveBytes__Class* get_class() {
            return il2cpp::get_class<app::DeriveBytes__Class>(type_info(), "System.Security.Cryptography", "DeriveBytes");
        }
        inline app::DeriveBytes* create() {
            return il2cpp::create_object<app::DeriveBytes>(get_class());
        }
    } // namespace DeriveBytes
} // namespace app::classes::types
