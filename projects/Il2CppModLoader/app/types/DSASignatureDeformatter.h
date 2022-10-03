#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DSASignatureDeformatter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DSASignatureDeformatter__Class** type_info;
        inline app::DSASignatureDeformatter__Class* get_class() {
            return il2cpp::get_class<app::DSASignatureDeformatter__Class>(type_info, "System.Security.Cryptography", "DSASignatureDeformatter");
        }
        inline app::DSASignatureDeformatter* create() {
            return il2cpp::create_object<app::DSASignatureDeformatter>(get_class());
        }
    } // namespace DSASignatureDeformatter
} // namespace app::classes::types
