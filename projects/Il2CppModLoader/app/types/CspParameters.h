#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CspParameters {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CspParameters__Class** type_info;
        inline app::CspParameters__Class* get_class() {
            return il2cpp::get_class<app::CspParameters__Class>(type_info, "System.Security.Cryptography", "CspParameters");
        }
        inline app::CspParameters* create() {
            return il2cpp::create_object<app::CspParameters>(get_class());
        }
    } // namespace CspParameters
} // namespace app::classes::types
