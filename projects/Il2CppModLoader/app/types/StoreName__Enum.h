#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StoreName__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StoreName__Enum__Class** type_info;
        inline app::StoreName__Enum__Class* get_class() {
            return il2cpp::get_class<app::StoreName__Enum__Class>(type_info, "System.Security.Cryptography.X509Certificates", "StoreName");
        }
        inline app::StoreName__Enum* create() {
            return il2cpp::create_object<app::StoreName__Enum>(get_class());
        }
    } // namespace StoreName__Enum
} // namespace app::classes::types
