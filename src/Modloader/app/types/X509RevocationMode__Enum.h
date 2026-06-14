#pragma once
#include <Modloader/app/structs/X509RevocationMode__Enum.h>
#include <Modloader/app/structs/X509RevocationMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X509RevocationMode__Enum {
        inline app::X509RevocationMode__Enum__Class** type_info() {
            static app::X509RevocationMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::X509RevocationMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::X509RevocationMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::X509RevocationMode__Enum__Class>(type_info(), "System.Security.Cryptography.X509Certificates", "X509RevocationMode");
        }
        inline app::X509RevocationMode__Enum* create() {
            return il2cpp::create_object<app::X509RevocationMode__Enum>(get_class());
        }
    } // namespace X509RevocationMode__Enum
} // namespace app::classes::types
