#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HashAlgorithm {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HashAlgorithm__Class** type_info;
        inline app::HashAlgorithm__Class* get_class() {
            return il2cpp::get_class<app::HashAlgorithm__Class>(type_info, "System.Security.Cryptography", "HashAlgorithm");
        }
        inline app::HashAlgorithm* create() {
            return il2cpp::create_object<app::HashAlgorithm>(get_class());
        }
    } // namespace HashAlgorithm
} // namespace app::classes::types
