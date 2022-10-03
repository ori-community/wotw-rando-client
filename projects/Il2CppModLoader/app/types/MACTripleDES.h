#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MACTripleDES {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MACTripleDES__Class** type_info;
        inline app::MACTripleDES__Class* get_class() {
            return il2cpp::get_class<app::MACTripleDES__Class>(type_info, "System.Security.Cryptography", "MACTripleDES");
        }
        inline app::MACTripleDES* create() {
            return il2cpp::create_object<app::MACTripleDES>(get_class());
        }
    } // namespace MACTripleDES
} // namespace app::classes::types
