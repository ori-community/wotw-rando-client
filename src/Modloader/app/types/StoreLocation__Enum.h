#pragma once
#include <Modloader/app/structs/StoreLocation__Enum.h>
#include <Modloader/app/structs/StoreLocation__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StoreLocation__Enum {
        inline app::StoreLocation__Enum__Class** type_info() {
            static app::StoreLocation__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StoreLocation__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StoreLocation__Enum__Class* get_class() {
            return il2cpp::get_class<app::StoreLocation__Enum__Class>(type_info(), "System.Security.Cryptography.X509Certificates", "StoreLocation");
        }
        inline app::StoreLocation__Enum* create() {
            return il2cpp::create_object<app::StoreLocation__Enum>(get_class());
        }
    } // namespace StoreLocation__Enum
} // namespace app::classes::types
