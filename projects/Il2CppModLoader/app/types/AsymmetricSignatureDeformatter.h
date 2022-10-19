#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AsymmetricSignatureDeformatter {
        inline app::AsymmetricSignatureDeformatter__Class** type_info = (app::AsymmetricSignatureDeformatter__Class**)(modloader::win::memory::resolve_rva(0x04760B90));
        inline app::AsymmetricSignatureDeformatter__Class* get_class() {
            return il2cpp::get_class<app::AsymmetricSignatureDeformatter__Class>(type_info, "System.Security.Cryptography", "AsymmetricSignatureDeformatter");
        }
        inline app::AsymmetricSignatureDeformatter* create() {
            return il2cpp::create_object<app::AsymmetricSignatureDeformatter>(get_class());
        }
    } // namespace AsymmetricSignatureDeformatter
} // namespace app::classes::types
