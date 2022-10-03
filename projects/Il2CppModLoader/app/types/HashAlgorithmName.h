#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HashAlgorithmName {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HashAlgorithmName__Class** type_info;
        inline app::HashAlgorithmName__Class* get_class() {
            return il2cpp::get_class<app::HashAlgorithmName__Class>(type_info, "System.Security.Cryptography", "HashAlgorithmName");
        }
        inline app::HashAlgorithmName* create() {
            return il2cpp::create_object<app::HashAlgorithmName>(get_class());
        }
        inline app::HashAlgorithmName__Boxed* box(app::HashAlgorithmName value) {
            return il2cpp::box_value<app::HashAlgorithmName__Boxed>(get_class(), value);
        }
    } // namespace HashAlgorithmName
} // namespace app::classes::types
