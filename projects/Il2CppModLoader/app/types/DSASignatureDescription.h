#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DSASignatureDescription {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DSASignatureDescription__Class** type_info;
        inline app::DSASignatureDescription__Class* get_class() {
            return il2cpp::get_class<app::DSASignatureDescription__Class>(type_info, "System.Security.Cryptography", "DSASignatureDescription");
        }
        inline app::DSASignatureDescription* create() {
            return il2cpp::create_object<app::DSASignatureDescription>(get_class());
        }
    } // namespace DSASignatureDescription
} // namespace app::classes::types
