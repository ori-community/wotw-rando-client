#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AsymmetricAlgorithm {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AsymmetricAlgorithm__Class** type_info;
        inline app::AsymmetricAlgorithm__Class* get_class() {
            return il2cpp::get_class<app::AsymmetricAlgorithm__Class>(type_info, "System.Security.Cryptography", "AsymmetricAlgorithm");
        }
        inline app::AsymmetricAlgorithm* create() {
            return il2cpp::create_object<app::AsymmetricAlgorithm>(get_class());
        }
    } // namespace AsymmetricAlgorithm
} // namespace app::classes::types
