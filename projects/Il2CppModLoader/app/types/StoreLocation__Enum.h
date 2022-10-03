#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StoreLocation__Enum {
        namespace {
            app::StoreLocation__Enum__Class* type_info_ref = nullptr;
        }
        app::StoreLocation__Enum__Class** type_info = &type_info_ref;
        inline app::StoreLocation__Enum__Class* get_class() {
            return il2cpp::get_class<app::StoreLocation__Enum__Class>(type_info, "System.Security.Cryptography.X509Certificates", "StoreLocation");
        }
        inline app::StoreLocation__Enum* create() {
            return il2cpp::create_object<app::StoreLocation__Enum>(get_class());
        }
    } // namespace StoreLocation__Enum
} // namespace app::classes::types
