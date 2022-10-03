#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Oid {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Oid__Class** type_info;
        inline app::Oid__Class* get_class() {
            return il2cpp::get_class<app::Oid__Class>(type_info, "System.Security.Cryptography", "Oid");
        }
        inline app::Oid* create() {
            return il2cpp::create_object<app::Oid>(get_class());
        }
    } // namespace Oid
} // namespace app::classes::types
